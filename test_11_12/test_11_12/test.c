//#define _CRT_SECURE_NO_WARNINGS 1
//
//int main(int argc, char *argv[]) {
//	int counter, i = 0;
//	printf("PRINT COUNTINUE 10 NUMBERS!\n");
//	printf("PLEASE INPUT THE START NUMBER :");
//	scanf("%d", &counter);
//	//读取用户输入保存到counter中
//	while (i++ < 11) {
//		printf(" %d \n", counter++);
//	}
//	//循环10次，打印范围为从输入数据开始的10个整数
//	printf("PROGRAM EXIT!\n");
//	return 0;
//
//    //结果为1...10；
//}

//#define WEEK_PER_DAY 7 //每周有七天
//int main(int argc, char *argv[]) {
//	int days, weeks, input;
//	
//	printf("CONVERT DAYS TO WEEKS!\N");
//	printf("PLEASE INPUT THE NUMBER OF DAYS( <=0 TO QUIT ):");  //输入一个15
//	scanf("%d", &input);
//	//读取用户输入，保存至input变量中
//	while (input > 0) {
//		weeks = input / WEEK_PER_DAY;   
//		//计算周数
//		days = input%WEEK_PER_DAY;
//		//计算不足一周的天数
//		printf("%d days are %d weeks, %d days\n", input, weeks, days); //15天为2周余1天
//		//打印结果 15 2周 1天
//		printf("PLEASE INPUT THE NUMBER OF DAYS( <=0 TO QUIT ):");  //继续操作打印
//		scanf("%d", &input);
//	}
//	printf("PROGRAM EXIT!\n");
//	return 0;
//}

//#define FEET_TO_CM 30.48
//#define INCH_TO_CM 2.54
//预定义转换单位明示常量

//int main(int argc, char *argv[]) {
//	int feet;
//	float inches, cm;
//	printf("CONVERT CM TO INCHES!\n");
//	printf("Enter the heigh in centimeters:");  //输入170
//	scanf("%f", &cm);
//	//读取用户输入的数据
//	while (cm > 0) {
//		feet = cm / FEET_TO_CM;
//		inches = (cm - feet*FEET_TO_CM) / INCH_TO_CM;
//		//数据转换计算
//		printf(" %.lf cm = %d feet , %.lf inches\n", cm, feet, inches);
//		//打印结果 feet为5尺 inches为7英寸
//		printf("Enter the height in centimeters( <=0 TO QUIT ):");
//		scanf("%f", &cm);
//		//循环读取用户输入
//	}
//	printf("PEOGRAM EXIT!\n");
//	return 0;
//}

//int main(int argc, char *argv[]) {
//	int count = 0, sum = 0;
//	printf("Enter the number of days you work:");  //输入20-天
//	scanf("%d", &count);
//	读取用户输入的天数
//	while (count > 0) {
//		sum = sum + count--;
//	}
//	通过递减运算，控制循环，计算工资总和
//	printf("You earned $ %d total!\n", sum);
//	printf("PROGRAM EXIT!\N");
//	return 0;
//	结果为210；
//}

//int main(int argc, char *argv[]) {
//	int count = 0, sum = 0;
//	printf("Enter the number of days you work:");  //输入20-天
//	scanf("%d", &count);
//	//读取用户输入的天数
//	while (count > 0) {
//		sum = sum + count * count;
//		count--;
//	}
//	//通过递减运算，控制循环，计算工资总和
//		printf("You earned $ %d total!\n", sum);
//	printf("PROGRAM EXIT!\N");
//	return 0;
//}

//double cubic(double n);
//int main(int argc, char *argv[]) {
//	double input;
//	printf("Enter the double datum to calc cubic :");  //打印提示语
//	scanf("%lf", &input);
//	//读取用户的输入
//	cubic(input);
//	//调用立方函数计算立方值  
//	printf("PROGRAM EXIT!\n");
//	return 0;
//}
//double cubic(double n) {
//	double t = n * n *n;  //2乘2乘2=8
//	printf("The %lg's cubic is %lg !\n", n, t);  //2   8 操作和打印结果
//	return t;
//}

//int main(int argc, char *argv[]) {
//	int first, second;
//	printf("This program computes moduli.\n");
//	printf("Enter an integer to server as the second operand:");
//	scanf("%d", &second);
//	//用户输入的second数据保持不变
//	printf("Now enter the first operand:");
//	scanf("%d", &first);
//	//分别读取用户输入的数据
//	while (first > 0) {
//		printf("%d %% %d is %d\n", first, second, (first%second));
//		printf("Enter next number for first operand( <= 0 to quit):");
//		scanf("%d", &first);
//	}
//	//循环读取用户的输入，计算并打印结果
//	printf("Done!\n");
//	return 0;
//}

//int Temperatures(double fahrenheit);
//int main(int argc, char *argv[]) {
//	double input;
//	printf("This program convert fahrenheit to celsius and kelvin.\n");
//	printf("Enter a fahrenheit to start : ");
//	while (scanf("%lf", &input) == 1) {
//		Temperatures(input);
//		printf("Enter next fahrenheit! ( q to quit): ");
//	}
//	printf("Done!\n");
//	return 0;
//}
//int Temperatures(double fahrenheit) {
//	const double F_TO_C = 32.0;
//	const double C_TO_K = 273.16;
//	double celsius, kelvin;
//	celsius = 5.0 / 9.0*(fahrenheit - F_TO_C);
//	kelvin = celsius + C_TO_K;
//	printf("%.2f. fahrenheit, equal %.2f celsius, and %.2f kelvin\n", fahrenheit,
//		celsius, kelvin);
//	return 0;
//}


//当前机器的字节序是什么
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//计算当前机器的字节序是多少
//int check_sys()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	//返回1，小端
//	//返回0，大端
//	return *p;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//该代码的结果是？
//int main()
//{
//	char a = -128;
//	//100000000000000010000000
//	//111111111111111101111111
//	//111111111111111110000000  补码
//	//10000000  补码和原码相同
//	//111111111111111110000000 将这个二进制转换成十进制4294967168
//	printf("%u\n", a);  //%u是打印十进制的无符号数字
//	return 0;
//	//结果为4294967168；
//}

//int main()
//{
//	int n = 9;
//	//0 00000000 00000000000000000001001 -补码
//
//	float *pFloat = (float *)&n;
//	printf("n的值为: %d\n", n);  //9
//	printf("pFloat的值为: %f\n", *pFloat); //0.000000
//	//(-1)^0 * 0.00000000000000000001001 * 2^-126
//	//
//	*pFloat = 9.0;
//	//1001.0
//	//1.001*2^3
//	//(-1)^0 *1.001 * 2^3
//	//01000001000100000000000000000000
//	//1091567616
//	printf("num的值为: %d\n", n);
//	printf("pFloat的值为: %f\n", *pFloat);//9.0
//	return 0;
//	//n的值为: 9
//    //pFloat的值为: 0.000000
//    //num的值为 : 1091567616
//	//pFloat的值为 : 9.000000
//}

//int main(void)
//{
//	long num;
//	long sum = 0L;
//	int status;
//
//	printf("Please enter an integer to be summed ");
//	printf("(q to quit): ");
//	status = scanf("%ld", &num);
//	while (status == 1)
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit): ");
//		status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//
//	return 0;
//}
//用户输入整数 直到输入q退出并且得到输入数的总和
//
//int main(void)
//{
//	int n = 5;
//
//	while (n < 7)
//	{
//		printf("n = %d\n", n);
//		n++;
//		printf("Now n = %d\n", n);
//	}
//	printf("The loop has finished.\n");
//
//	return 0;
//}

//int main(void)
//{
//	int n = 0;
//
//	while (n < 3)
//	{
//		printf("n is %d\n", n);
//		n++;
//	}
//	printf("That's all this program does\n");
//
//	return 0;
//
//}

//int main(void)
//{
//	int n = 0;
//
//	while (n++ < 3)
//	{
//		printf("n is %d\n", n);
//	}
//	printf("That's all this program does.\n");
//
//	return 0;
//}

//#include <math.h>

//int main(void)
//{
//	const double ANSWER = 3.14159;
//	double response;
//
//	printf("What is the value of pi?\n"); //先打印这一句
//	scanf("%lf", &response);   //用于double类型的输入输出
//	while (fabs(response - ANSWER) > 0.0001)
//	{
//		printf("Try again!\n");
//		scanf("%lf", &response);
//	}
//	printf("Close enough!\n");
//
//	return 0;
//}

//int main(void)
//{
//	int true_val, false_val;
//
//	true_val = (10 > 2);
//	false_val = (10 == 2);
//	printf("true = %d; false = %d \n", true_val, false_val);
//
//	return 0;
//	
//}

//int main(void)
//{
//	int n = 3;
//
//	while (n)
//		printf("%2d is true\n", n--);
//	printf("%2d is false\n", n);
//
//	n = -3;
//	while (n)
//		printf("%2d is true\n", n++);
//	printf("%2d is false\n", n);
//
//	return 0;
//}

//int main(void)
//{
//	long num;
//	long sum = 0L;
//	int status;
//
//	printf("Please enter an integer to be summed ");
//	printf("(q to quit): ");
//	status = scanf("%ld", &num);
//	while (status == 1)
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit): ");
//		status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//
//	return 0;
//}

//int main(void)
//{
//	long num;
//	long sum = 0L;
//	_Bool input_is_good;
//
//	printf("Please enter an integer to be summed ");
//	printf("(q to quit): ");
//	input_is_good = (scanf("%ld", &num) == 1); //提高代码可读性
//	while (input_is_good)
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit): ");
//		input_is_good = (scanf("%ld", &num) == 1);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//
//	return 0;
//}

//一个计数循环
//int main(void)
//{
//	const int NUMBER = 22;
//	int count = 1;
//
//	while (count <= NUMBER)
//	{
//		printf("Be my Valentine!\n");  //打印这句话22次
//		count++;
//	}
//	return 0;
//}

//int main(void)
//{
//	const int NUMBER = 22;
//	int count;
//
//	for (count = 1; count <= NUMBER; count++)
//		printf("Be my Valentine!\n");
//
//	return 0;
//}

//int main(void)
//{
//	int num;
//
//	printf("    n  n cubed\n");
//	for (num = 1; num <= 6; num++)
//		printf("%5d %5d\n", num, num*num*num);  //打印1到6的立方
//
//	return 0;
//}

//int main(void)
//{
//	int secs;
//
//	for (secs = 5; secs > 0; secs--)
//		printf("%d seconds!\n", secs);
//	printf("We have ignition!\n");
//	return 0;
//}

//int main(void)
//{
//	int n;
//
//	for (n = 2; n < 60; n = n + 13)
//		printf("%d \n", n);
//	return 0;
//}

//int main(void)
//{
//	char ch;
//
//	for (ch = 'a'; ch <= 'z'; ch++)   //97 122
//		printf("The ASCII value for %c is %d.\n", ch, ch); //转换对应ascll输出数字，一直输出到122停止
//	return 0;
//}

//int main(void)
//{
//	double debt;
//	for (debt = 100.0; debt < 150.0; debt = debt * 1.1)  //11 11的加
//		printf("Your debt is now $%.2f.\n", debt);
//
//	return 0;
//
//}

//int main(void)
//{
//	int x;
//	int y = 55;
//
//	for (x = 1; y <= 75; y = (++x * 5) + 50)
//		printf("%10d %10d\n", x, y);
//	return 0;
//}

//int main(void)
//{
//	int ans, n;
//	ans = 2;
//	for (n = 3; ans <= 25;)
//		ans = ans * n;
//	printf("n = %d; ans  = %d.\n", n, ans);
//	return 0;
//}

//int main(void)
//{
//	int num = 0;
//
//	for (printf("Keep entering numbers!\n"); num != 6;)
//		scanf("%d", &num);
//	printf("That's the one I want!\n");
//	return 0;
//}

//逗号运算符
//int main(void)
//{
//	const int FIRST_OZ = 46;
//	const int NEXT_OZ = 20;
//	int ounces, cost;
//
//	printf(" ounces cost\n");
//	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
//		printf("%5d  $%4.2f\n", ounces, cost / 100.0);
//
//	return 0;
//}

//求序列的和
//int main(void)
//{
//	int t_ct;
//	double time, power_of_2;
//	int limit;
//
//	printf("Enter the number of terms you want: ");
//	scanf("%d", &limit);
//	for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit;
//								   t_ct++, power_of_2 *= 2.0)
//	{
//		time += 1.0 / power_of_2;
//		printf("time = %f when terms = %d.\n", time, t_ct);
//	}
//	return 0;
//}

//int main(void)
//{
//	const int secret_code = 13;
//	int code_entered;
//
//	do
//	{
//		printf("To enter the triskaidekaphobia therapy club,\n");
//		printf("please enter the secret code number: ");
//		scanf("%d", &code_entered);
//	} while (code_entered != secret_code);
//	printf("Congratulations! You are cured!\n");
//
//	return 0;
//}

//#define ROWS 6
//#define CHARS 10
//int main(void)
//{
//	int row;
//	char ch;
//
//	for (row = 0; row < ROWS; row++)
//	{
//		for (ch = 'A'; ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//
//	return 0;
//}

//int main(void)
//{
//	const int ROWS = 6;
//	const int CHARS = 6;
//	int row;
//	char ch;
//
//	for (row = 0; row < ROWS; row++)
//	{
//		for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//
//	return 0;
//	//ABCDEF
//	//BCDEF
//	//CDEF
//	//DEF
//	//EF
//	//F
//}

//#define SIZE 10
//#define PAR 72
//int main(void)
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//
//	printf("Enter %d golf scores:\n", SIZE);
//	for (index = 0; index < SIZE; index++)
//		scanf("%d", &score[index]);
//	printf("The scores read in are as follows:\n");
//	for (index = 0; index < SIZE; index++)
//		printf("%5d", score[index]);
//	printf("\n");
//	for (index = 0; index < SIZE; index++)
//		sum += score[index];
//	average = (float)sum / SIZE;
//	printf("Sum of scores = %d, average = %.2f\n", sum, average);
//	printf("That's a handicap of %.0f.\n", average - PAR);
//
//	return 0;
//}


























































































