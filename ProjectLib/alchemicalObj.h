#pragma once


class Water {
protected:
	Water();
	virtual ~Water();
};

class Fire {

protected:
	Fire();
	virtual ~Fire();
};

class Air {
protected:
	Air();
	virtual~Air() = default;
};

class Ground {
protected:
	Ground();
	virtual ~Ground() = default;
};

class Steam : protected Water, protected Fire
{
public:
	Steam();
	~Steam();
};