#pragma once

class Book {
private:
	string name;
	string num;

public:
	void addPhone();//입력한 전화번호 등록
	void editPhone();//전화번호 수정
	string getPnum();//전화번호를 불러옴
	string getName();//이름을 불러옴

};

