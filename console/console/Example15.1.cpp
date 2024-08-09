#include<iostream>
#include<map>
//armor Ŭ����

class Armor
{
public :
	Armor() :name(""),def(0){}

	Armor(const std::string& n ,int d) : name(n), def(d){}
public:
	std::string GetName()const
	{
		return name;
	}
	int GetDef()const
	{
		return def; //  �⺻������ �Ű����� �ִ»�����
	}

private:
	std::string name;
	int def;

};

//Scene Ŭ���� ����
class Scene
{
public:
	Scene() :desc("") {}
	Scene(const std::string& s) :desc(s){}

	std::string GetDesc()const
	{
		return desc;
	}

private:
	std::string desc;
};
class SceneManager
{
public:
	SceneManager() :curScene(nullptr), curSceneName("") {}
	~SceneManager() 
	{
		//�ʿ� ����� ��� �޸𸮸� ���������
		for (auto& i : scenes)
		{
			delete i.second; //������ �����Ͱ� ����Ű�� 
			i.second = nullptr;
		}
	}


public:
	//���� �߰��ϴ� ??(�Լ�)
	void AddScene(const std::string& name, Scene* scene)
	{
		scenes[name] = scene; //���� �̸��� Ű���ϰ� �����ͷ� ���� �����Ѵٴ¶�
	}
	//���� �����ϴ� �Լ�
	void RemoveScene(const std::string& name)
	{
		//�� �̸����� map���� ã�ƾ���
		auto iter = scenes.find(name);
		//���� ������
		if (iter != scenes.end()) 
		{
			//������	
			delete iter->second;
			iter->second = nullptr;
			scenes.erase(iter);
		}
	}
	//������� ����
	void SetCurScene(const std::string& name) 
	{
		auto iter = scenes.find(name);
		if (iter != scenes.end())
		{
			curScene = iter->second;
			curSceneName = name;
		}
		else
		{
			std::cout << "����" << std::endl;
		}
	}
	// ���� ���� ���(�����ִ�)�Լ�
	void ShowCurScene()const
	{
		if (curSceneName.empty()) return;
		std::cout << curSceneName << std::endl;
		std::cout << curScene->GetDesc() << std::endl;
		
	}


private:
	//���� �̸��� Ű�������ϰ�  �������� �����͸� ������ ����map�� ����������
	std::map<std::string, Scene*>scenes;
	//������� ����Ű�� ������
	Scene* curScene;
	//������� �̸�
	std::string curSceneName;

};

int main()
{
	std::map<std::string, Armor>armor; //Ű�� ���ڿ� ���� Armor�� ��ü

	armor.insert(std::make_pair("shield", Armor("����", 10)));
	armor.insert(std::make_pair("smallshiled", Armor("��������", 10)));
	armor.insert(std::make_pair("greave", Armor("�Ź�", 10)));

	for (const auto& pair : armor)
	{
		std::cout << "Ű : " << pair.first << std::endl;
		std::cout << "�̸� : " << pair.second.GetName() << std::endl;
		std::cout << "���� : " << pair.second.GetDef() << std::endl;
	}

	SceneManager sceneManager;
	sceneManager.AddScene("menu", new Scene("�޴����̴�. "));
	sceneManager.AddScene("Battle", new Scene("��Ʋ���̴�. "));

	sceneManager.SetCurScene("menu");
	sceneManager.ShowCurScene();

	sceneManager.SetCurScene("Battle");
	sceneManager.ShowCurScene();


}