#pragma once
	class Trigon
	{
	public:
		double a, b, c;
		Trigon();
		~Trigon();
		void SetA(int num);
		void SetB(int num);
		void SetC(int num);
		void Angle_A_B();
		void Angle_A_C();
		void Angle_C_B();
		void Area();
		void Perimeter();

	};
