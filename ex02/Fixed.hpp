#ifndef FIXED_HPP
 #define FIXED_HPP

 #include <iostream>
 #include <string>
 #include <cmath>


 class Fixed{
	private:
		int n;
		static int nbr;

	public:
		Fixed();
		Fixed(const Fixed &uno);
		Fixed(const int ar);
		Fixed(const float tr);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;


		Fixed& operator=(const Fixed &uno);
		bool operator<(const Fixed &cp) const;
		bool operator>(const Fixed &cp) const;
		bool operator>=(const Fixed &cp) const;
		bool operator<=(const Fixed &cp) const;
		bool operator==(const Fixed &cp) const;
		bool operator!=(const Fixed &cp) const;

		Fixed operator+(const Fixed &ad) const;
		Fixed operator-(const Fixed &ss) const;
		Fixed operator*(const Fixed &ff) const;
		Fixed operator/(const Fixed &dd) const;

		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int i);
		Fixed operator--(int i);

		static Fixed& min(Fixed &f, Fixed &s);
		static const Fixed& min(const Fixed &f, const Fixed &s);
		static Fixed& max(Fixed &f, Fixed &s);
		static const Fixed& max(const Fixed &f, const Fixed &s);


		friend std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
 };

 #endif