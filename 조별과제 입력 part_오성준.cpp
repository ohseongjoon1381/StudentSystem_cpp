#include <iostream>
using namespace std;

#define NAME_SIZE 10             //�̸�
#define ID_SIZE 10               //�й�
#define STUDENT_MAX 100          //�л� ��
#define DEPARTMENT_SIZE 20       //�а�
#define PHONE_SIZE 20            //��ȭ��ȣ
#define PROFESSOR  10            //����
#define CONSULTING 10            //�������


struct Student
{
	char strName[NAME_SIZE];               //�̸�
	char strDepartment[DEPARTMENT_SIZE];   //�а�
	char strID[ID_SIZE];                   //�й�
	char strPhone[PHONE_SIZE];             //��ȭ��ȣ
	char professor[PROFESSOR];             //��������
	char consulting[CONSULTING];           //�������

	int number;                            //�л���ȣ
	int DB;                                //DB ����
	int C;                                 //C���α׷��� ����
	int AI;                                //AI ����
	int ESP;                               //ESP ����
	int total;                             //�հ� ����
	float avg;                             //��� ����

};

int main()
{

	Student StudentArr[STUDENT_MAX] = {};
	char strName[NAME_SIZE] = {};
	char strDepartment[DEPARTMENT_SIZE] = {};
	char strID[ID_SIZE] = {};
	char strPhone[PHONE_SIZE] = {};
	char professor[PROFESSOR] = {};
	char consulting[CONSULTING] = {};
	int StudentCount = 0;
	int StudentNum = 1;

	cout << " ======== �л������� �Է����ּ���. ========" << endl;
	


	cout << "�̸� : ";
	cin >> StudentArr[StudentCount].strName;

	cin.ignore(1024, '\n');            //cin �� �� ���� ���۷� �Է��ϴµ� �̸� ����ֱ� ����(���� �Է� �Ҷ��� ��� X)              

	cout << "�й� : ";
	cin.getline(StudentArr[StudentCount].strID, ID_SIZE);

	cout << "�а� : ";
	cin.getline(StudentArr[StudentCount].strDepartment, DEPARTMENT_SIZE);

	cout << "��ȭ��ȣ : ";
	cin.getline(StudentArr[StudentCount].strPhone, PHONE_SIZE);

	cout << "�������� : ";
	cin.getline(StudentArr[StudentCount].professor, PROFESSOR);

	cout << "�������(O,X) : ";
	cin.getline(StudentArr[StudentCount].consulting, CONSULTING);

	cout << "DB ���� : " << endl << "100�� ����"; 
	cin >> StudentArr[StudentCount].DB;

	cout << "C ���α׷��� ���� : ";
	cin >> StudentArr[StudentCount].C;

	cout << "AI ���� : ";
	cin >> StudentArr[StudentCount].AI;

	cout << "ESP ���� : ";
	cin >> StudentArr[StudentCount].ESP;

	StudentArr[StudentCount].total =
		StudentArr[StudentCount].DB +
		StudentArr[StudentCount].C +
		StudentArr[StudentCount].AI +
		StudentArr[StudentCount].ESP;

	StudentArr[StudentCount].avg =
		StudentArr[StudentCount].total / 4.f;

	StudentArr[StudentCount].number = StudentNum;

	++StudentNum;
	++StudentCount;

	cout << "======== �л� �߰��� �Ϸ�Ǿ����ϴ�. ========" << endl; 
}


