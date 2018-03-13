#include <iostream>

int main() {
	while (true) { 
		short n, a, d1; 
		while ((std::cin >> n), n = abs(n), n == 1 || n % 2 == 0); 
		short* m_magic_square = new short[n*n];
		for (unsigned int i = 0; i < n*n; i++)
			((i%n*n) + i / n)[m_magic_square] = ((n - i%n - 1 + i / n * 2 + 1) % n) * n + ((i%n + i / n * 2 + 1) % n) + 1;
		for (short i = 0; i < n*n + 1; i++) { 
			if (i%n == 0 && i != 0 && !(a = 0)) {
				for (short int j = 0; j < n; j++) 
					a += (i + j - n)[m_magic_square];
				std::cout << "= " << a << "\n" << (i<n*n ? "   " : "");
			}
			(i < n*n ? std::cout << (i == 0 ? "   " : "") << i[m_magic_square] << (i[m_magic_square] < 10 && i < n*n ? "  " : " ") : std::cout);
		}
		for (short i = n - 1, a = 0; i < n*n - n + 1; i += n - 1)
			a += i[m_magic_square];
		std::cout << a << " ";
		for (short i = 0, d1 = 0; i < n; i++) {
			d1 += (i + (n*i))[m_magic_square];
			for (short j = 0, a = 0; j < n*n; j += n)
				a += (j + i)[m_magic_square];
			(i == n - 1 ? std::cout << a << " " << d1 << std::endl : std::cout << a << " ");
		}
		delete m_magic_square;
	}
	return 0; 
}
