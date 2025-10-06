////задача 1
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	setlocale(0, "");
//	int k = 0;
//	while (k <= 100) {
//		cout << "Цельсия: " << k << " ";
//		cout << "Фаренгейт: " << 1.8 * k + 32 << endl;
//		k += 10;
//	}
//	return 0;
//}

//int main() {
//	setlocale(0, "");
//	double x = 0;
//	do {
//		cout << "При x = " << x << ", y = " << log(x + 1) * sin(x) << endl;
//		x += 0.5;
//	} while (x <= 5);
//	return 0;
//}

//int main() {
//	setlocale(0, "");
//	for (double k = 0; k < 2*M_PI + M_PI/6; k += M_PI/6) {
//		cout << "y = " << cos(k) << endl;
//	}
//	return 0;
//}

//int main() {
//	setlocale(0, "");
//	double x = -1.5;
//	while (x <= 1.5) {
//		if (x > 1)
//			cout << "y = " << 1 + sqrt(abs(cos(x))) << endl;
//		else if (x >= -0.5)
//			cout << "y = " << x + 1 << endl;
//		else
//			cout << "y = " << 1 - x * x << endl;
//		x += 0.25;
//	}
//	return 0;
//}


////задача 2
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(0, "");
//	int k = 0, s = 0, d = 1000000;
//	for (int i = 1; i < 8; i++) {
//		int a;
//		cin >> a;
//		if (a < 0)
//			k += 1;
//		if ((a > 9 && a < 100) || (a < -9 && a > -100))
//			s += a;
//		if (a < d)
//			d = a;
//	}
//	cout << "Количество отрицательных чисел: " << k << endl;
//	cout << "Сумма двузначных чисел: " << s << endl;
//	cout << "Наименьшее число: " << d << endl;
//	return 0;
//}


////задача 3
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(0, "");
//	double n, t = 2;
//	double s = 0;
//	cout << "Введите n: "; cin >> n;
//	while (t <= 2 * n) {
//		s += 1 / t;
//		t += 2;
//	}
//	cout << s;
//	return 0;
//}


////задача 4
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//double f(double x, int n);
//double g(double x, int n);
//
//int main() {
//	setlocale(0, "");
//	double x;
//	int n;
//
//	cout << "Введите значение x: "; cin >> x;
//	cout << "Введите значение n: "; cin >> n;
//
//	double otv_a = f(x, n);
//	double otv_b = g(x, n);
//
//	cout << "Ответ: a) " << otv_a << endl;
//	cout << "Ответ: b) " << otv_b;
//	return 0;
//}


//double f(double x, int n) {
//	double res = cos(x);
//
//	for (int i = 2; i <= n; i++) {
//		res = cos(x + res);
//	}
//
//	return res;
//}
//
//double g(double x, int n) {
//	double res = sqrt(x);
//
//	for (int i = 2; i <= n; i++) {
//		res = sqrt(x + res);
//	}
//
//	return res;
//}


////задача 5
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//double f(double epsilon) {
//    double sum = 0.0;
//    int n = 0;
//    double a;
//
//    while (true) {
//        a = (n % 2 == 0 ? 1.0 : -1.0) / (2 * n + 1);
//
//        if (fabs(a) < epsilon && n > 0) {
//            break;
//        }
//
//        sum += a;
//        n++;
//    }
//
//    return sum;
//}

//int main() {
//    setlocale(0, "");
//    double epsilon;
//
//    cout << "epsilon = "; cin >> epsilon;
//
//    cout << "\nРезультаты:" << endl;
//    cout << "Значение ?/4: " << M_PI / 4;
//    cout << "Приближение ?/4: " << f(epsilon) << endl;
//    cout << "Погрешность: " << fabs(f(epsilon) - M_PI) << endl;
//
//    return 0;
//}


////задача 6
//#include <iostream>
//#include <string>
//#include <sstream>
//
//using namespace std;
//
//int main() {
//    int count = 0;
//    int count2 = 0;
//    string input;
//
//    cout << "Вводите числа (для завершения введите любой нечисловой символ):" << endl;
//
//    while (true) {
//        cout << "Введите число: ";
//        cin >> input;
//
//        // Проверяем, является ли ввод числом
//        stringstream ss(input);
//        int number;
//
//        if (ss >> number && ss.eof()) {
//            count++;
//
//            if ((number & 1) == 0) {
//                count2++;
//            }
//        }
//        else {
//            break;
//        }
//    }
//
//    cout << "Общее количество введенных чисел: " << count << endl;
//    cout << "Количество четных чисел: " << count2 << endl;
//
//    return 0;
//}


////задача 7
//#include <iostream>
//#include <cmath>
//#include <vector>
//using namespace std;
//
//int main() {
//    setlocale(0, "");
//    int n;
//
//    cout << "Введите количество вершин многоугольника: ";
//    cin >> n;
//
//    if (n < 3) {
//        cout << "У многоугольника минимум 3 стороны" << endl;
//        return 1;
//    }
//
//    vector<double> x(n), y(n);
//
//    cout << "Введите координаты вершин (x y):" << endl;
//    for (int i = 0; i < n; i++) {
//        cout << "Вершина " << (i + 1) << ": ";
//        cin >> x[i] >> y[i];
//    }
//
//    double perimeter = 0;
//
//    for (int i = 0; i < n; i++) {
//        // Текущая вершина и следующая вершина (с замыканием на первую)
//        int next_i = (i + 1) % n;
//
//        // Вычисление расстояния между текущей и следующей вершиной
//        double dx = x[next_i] - x[i];
//        double dy = y[next_i] - y[i];
//        double distance = sqrt(dx * dx + dy * dy);
//
//        perimeter += distance;
//    }
//
//    cout << "\nПериметр " << n << "-угольника: " << perimeter << endl;
//
//    return 0;
//}


////задача 8
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(0, "");
//	int n;
//	cin >> n;
//	for (int k = 0; k < n; k++) {
//		if (k % 2 == 0)
//			for (int i = 0; i < (n / 2); i++) {
//				if ((i + 1) == n / 2)
//					cout << "o * " << endl;
//				else
//					cout << "o * ";
//			}
//		if (k % 2 != 0)
//			for (int i = 0; i < (n / 2); i++) {
//				if ((i + 1) == n / 2)
//					cout << "* o " << endl;
//				else
//					cout << "* o ";
//			}
//	}
//	return 0;
//}


////задача 9
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	setlocale(0, "");
//	int c = 0, k = 0;         //c хранит значение наибольшего элемента
//	vector<int> b;   //массив в котором будут храниться элементы
//	while (true) {
//		int a;
//		cin >> a;
//		if (a != 0) {
//			b.push_back(a);
//			c = max(c, a);
//		}
//		else {
//			break;
//		}
//	}
//	for (int x : b) {
//		if (x == c)
//			k++;
//	}
//	cout << "Количество чисел равных наибольшему составляет " << k;
//	return 0;
//}