#include<iostream>
using namespace std;

#define NAME_SIZE 30    // �̸�
#define STUDENT_MAX 10  // �ִ� �л� ��
#define MAJOR_MAX 30    // �����а�
#define HAKBUN_MAX 10   // �й�
#define SCORE 5        // ����
#define PHONENUMBER_MAX 15  // ��ȭ��ȣ
#define PROFESSOR 30    // ��������
#define CONSULTING 30   // �������


struct _tagStudent
{
    char strName[NAME_SIZE];
    char strMajor[MAJOR_MAX];
    char strPhone[PHONENUMBER_MAX];
    char strProfessor[PROFESSOR];
    char strConsulting[CONSULTING];
    char strHakbun[HAKBUN_MAX];
    int iScore;
};

enum MENU
{
    MENU_NONE,
    MENU_INSERT,
    MENU_SEARCH,
    MENU_EXIT
};


int main()
{

    _tagStudent tStudentArr[STUDENT_MAX] = {};
    char strName[NAME_SIZE] = {};
    int iStudentCount = 0;
    int iStdNumber = 1;

    while (true)
    {
        // �޴� ���
        cout << " 1. �л� ��� : " << endl;
        cout << " 2. �л� �˻� : " << endl;
        cout << " �޴��� �����ϼ��� : ";

        int iMenu;
        cin >> iMenu;

        switch (iMenu)
        {
        case MENU_INSERT:
       
            cout << " ********* �л� ��� **********" << endl;

            if (iStudentCount == STUDENT_MAX)
                break;

            //�л������� ����Ѵ�. �̸�, �а�, �й�, ����, ��ȭ��ȣ, ��������, ������� 

            cout << "�̸� :";
            cin >> tStudentArr[iStudentCount].strName;

            cin.ignore(1024, '\n');

            cout << "�а� : ";
            cin.getline(tStudentArr[iStudentCount].strMajor, MAJOR_MAX); //�����̽��ٱ��� ���ڿ��� �ν�.

            cout << "�й� : ";
            cin.getline(tStudentArr[iStudentCount].strHakbun, HAKBUN_MAX);

            cout << "���� : ";
            cin >> tStudentArr[iStudentCount].iScore;

            cout << "��ȭ��ȣ : ";
            cin.getline(tStudentArr[iStudentCount].strPhone, PHONENUMBER_MAX);

            cout << "�������� : ";
            cin.getline(tStudentArr[iStudentCount].strProfessor, PROFESSOR);

            cout << "������� : ";
            cin.getline(tStudentArr[iStudentCount].strConsulting, CONSULTING);

            cout << "�л� ��� �Ϸ� " << endl;

            break;

        }


        break;
    }

    int iMenu;
    cin >> iMenu;

    switch (iMenu)
    {
    case MENU_SEARCH:


        cout << "********* �л� �˻� **********" << endl;


        cin.ignore(1024, '\n');
        cout << "�̸��� �˻��ϼ���. : ";
        cin.getline(strName, NAME_SIZE);

        for (int i = 0; i < iStudentCount; ++i)
        {
            if (strcmp(tStudentArr[i].strName, strName) == 0)
            {
                cout << "�̸� : " << tStudentArr[i].strName << endl;
                cout << "�а� : " << tStudentArr[i].strMajor << endl;
                cout << "�й� : " << tStudentArr[i].strHakbun << endl;
                cout << "���� : " << tStudentArr[i].iScore << endl;
                cout << "��ȭ��ȣ : " << tStudentArr[i].strPhone << endl;
                cout << "�������� : " << tStudentArr[i].strProfessor << endl;
                cout << "������� : " << tStudentArr[i].strConsulting << endl;
                break;
            }
        }
        break;




    }
}





