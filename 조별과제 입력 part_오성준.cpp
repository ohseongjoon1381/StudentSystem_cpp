#include <iostream>
using namespace std;

#define NAME_SIZE 10             //이름
#define ID_SIZE 10               //학번
#define STUDENT_MAX 100          //학생 수
#define DEPARTMENT_SIZE 20       //학과
#define PHONE_SIZE 20            //전화번호
#define PROFESSOR  10            //교수
#define CONSULTING 10            //상담유무


struct Student
{
	char strName[NAME_SIZE];               //이름
	char strDepartment[DEPARTMENT_SIZE];   //학과
	char strID[ID_SIZE];                   //학번
	char strPhone[PHONE_SIZE];             //전화번호
	char professor[PROFESSOR];             //지도교수
	char consulting[CONSULTING];           //상담유무

	int number;                            //학생번호
	int DB;                                //DB 성적
	int C;                                 //C프로그래밍 성적
	int AI;                                //AI 성적
	int ESP;                               //ESP 성적
	int total;                             //합계 성적
	float avg;                             //평균 성적

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

	cout << " ======== 학생정보를 입력해주세요. ========" << endl;
	


	cout << "이름 : ";
	cin >> StudentArr[StudentCount].strName;

	cin.ignore(1024, '\n');            //cin 할 때 탭을 버퍼로 입력하는데 이를 비워주기 위함(정수 입력 할때는 상관 X)              

	cout << "학번 : ";
	cin.getline(StudentArr[StudentCount].strID, ID_SIZE);

	cout << "학과 : ";
	cin.getline(StudentArr[StudentCount].strDepartment, DEPARTMENT_SIZE);

	cout << "전화번호 : ";
	cin.getline(StudentArr[StudentCount].strPhone, PHONE_SIZE);

	cout << "지도교수 : ";
	cin.getline(StudentArr[StudentCount].professor, PROFESSOR);

	cout << "상담유무(O,X) : ";
	cin.getline(StudentArr[StudentCount].consulting, CONSULTING);

	cout << "DB 점수 : " << endl << "100점 기준"; 
	cin >> StudentArr[StudentCount].DB;

	cout << "C 프로그래밍 점수 : ";
	cin >> StudentArr[StudentCount].C;

	cout << "AI 점수 : ";
	cin >> StudentArr[StudentCount].AI;

	cout << "ESP 점수 : ";
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

	cout << "======== 학생 추가가 완료되었습니다. ========" << endl; 
}


