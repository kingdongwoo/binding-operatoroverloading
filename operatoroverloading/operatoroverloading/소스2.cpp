
/*<Color Ŭ���� �ۼ�>
1. �÷��� �����ϴ� ���� �ۼ�
2. ������ �����ϱ� ���h public interface �ۼ�
3. ++������ �����ε�(void operator ++ ()) �ۼ�
4. �Ķ���Ͱ� �ִ� ������ �ۼ�(public:
	enum { BLACK, RED, BLUE, GREEN, YELLOW, WHITE };
	Color(int c = BLACK) : color(c) { })

	< ColorCircle Ŭ���� >*/
		class ColorCircle : public Circle, Color {
		public:
			ColorCircle(int x, int y, int r = 20, int c = Color::RED) :
				Circle(x, y, r), Color(c) { }
			void Paint() {
				Circle::Paint();
				cout << ", the color number is " << Color::Col();
			}
			void operator ++ () {
				Color :: operator++ ();
				Circle :: operator++ ();
			}
	};

	//<Main �Լ�>
		int main() {
		int nRad1, nRad2;
		cout << "Input starting and final radius: ";
		cin >> nRad1 >> nRad2;
		for (ColorCircle cc(30, 30, nRad1, Color::RED);
			cc.Radius() < nRad2; ++cc) {
			cc.Paint();
			cout << endl;
		}
		system("pause");
		return 1;
	}
