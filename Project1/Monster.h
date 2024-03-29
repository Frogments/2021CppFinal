//-----------------------------------------------------------------------------
// Monster.h
//
// 모든 Monster의 부모 클래스이다.
// 각 Monster는 자신만의 특수기술을 갖는다
//-----------------------------------------------------------------------------

#pragma once

class Monster {

protected:
	int id;								// 생성된 모든 몬스터에 붙는 id

public:
	Monster();
	virtual ~Monster();

	virtual void special() = 0;			// 특수기술
};

