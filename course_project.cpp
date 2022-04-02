#include <iostream>

void graph()
{
	int gagatner, koxmer, a;
	do
	{
		std::cout << "gagatner=";
		std::cin >> gagatner;
	} while (gagatner < 0);

	if (gagatner == 1)
	{
		do
		{
			std::cout << "koxmer=";
			std::cin >> koxmer;
		} while (koxmer != 0);
	}
	else
		do
		{
			std::cout << "koxmer=";
			std::cin >> koxmer;
		} while (koxmer < 0);

	int matrix[30][30];
	int matrix1[30][30];

	for (int i = 0; i < gagatner; i++)
		for (int j = 0; j < gagatner; j++)
			matrix[i][j] = 0;

	for (int i = 0; i < koxmer; i++)
		for (int j = 0; j < gagatner; j++)
			matrix1[i][j] = 0;

	int x, y;

	for (int i = 0; i < koxmer; i++)
    {   
        std::cout<< "x = "; std::cin>> x;
        std::cout<< "y = "; std::cin>> y;
		matrix[x][y] = 1;
		matrix[y][x] = 1;
		matrix1[i][x] = 1;
		matrix1[i][y] = 1;
	}
	int zroner = 0;
	for (int i = 0; i < gagatner; i++)
		for (int j = 0; j < gagatner; j++)
			if (matrix[i][j] == 0)
				zroner++;

	std::cout << std::endl;
	std::cout << "    Harevanutyan Matrix";
	std::cout << std::endl;
	for (int i = 0; i < gagatner; i++)
	{
		for (int j = 0; j < gagatner; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

 /*   
	std::cout << std::endl;
	std::cout << "KCUTYAN MATRIC";
	std::cout << std::endl;
	for (int i = 0; i < koxmer; i++)
	{
		for (int j = 0; j < gagatner; j++)
		{
			std::cout << matrix1[i][j] << " ";
		}
		std::cout << std::endl;
	}
*/
	std::cout << "    Ankaxutyan tiv  = " << (zroner - gagatner) / 2 << std::endl;
	std::cout << std::endl;
}		
int main()
{
	graph();
	return 0;
}
