//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(){
//
//	//�����������û���κι�ϵ
//	int a = 10;
//	int b = 20;
//
//	bool greater = a > b;
//	printf("a > b : %d\n", greater);
//
//	bool less = a < b;
//	printf("a < b : %d\n", less);
//
//	bool equal = a == b;
//	printf("a == b : %d\n", equal);
//
//	bool not_equal = a != b;
//	printf("a != b : %d\n", not_equal);
//
//	bool greater_or_equal = a >= b;
//	printf("a >= b : %d\n", greater_or_equal);
//
//	bool less_or_equal = a <= b;
//	printf("a <= b : %d\n", a <= b);
//
//	int score = 99;
//	printf("��ĳɼ��ȼ� ��%s\n", score >= 99 ? "A" : "������");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//
//	int a = 12;
//	int b = 25;
//
//	printf("%d\n", a & b);
//	printf("%d\n", a | b);
//	printf("%d\n", a ^ b);
//
//	/*int temp;
//	temp = a, a = b, b = temp;
//	printf("a = %d,b = %d, %d\n", a, b, temp);*/
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d,b = %d\n", a, b);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//
//	int status = 4;
//	status = ~status;
//
//	printf("%d\n", status);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//void print_binary(uint8_t num);
//
//int main() {
//
//	uint8_t status = 0b00001100;
//
//	printf("Initial status : 0b");
//	print_binary(status);
//	printf("\t(Binary)\n");
//
//	status = status & 0b11111011;
//	printf("�رյ͵�����: 0b");
//	print_binary(status);
//	printf("\t(Binary)\n");
//
//	status = status ^ 0b00001011;
//	printf("һ������: 0b");
//	print_binary(status);
//	printf("\t(Binary)\n");
//
//	return 0;
//}
//
//void print_binary(uint8_t num) {
//	for (int index = 7; index >= 0; index--) {
//		printf("%d", (num >> index) & 1);
//	}
//	
//}

//#include <stdio.h>
//
//int main() {
//
//	int condition_a = 0;
//	int condition_b = 1;
//
//	int res = condition_a && condition_b;
//	printf("res = : %d\n", res);
//
//	res = condition_a || condition_b;
//	printf("res = %d\n", res);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//
//	int base_number = 8;
//	int add_number = 2;
//	int sub_number = 3;
//	int mul_number = 4;
//	int div_number = 2;
//	int mod_number = 5;
//	int left_shift_number = 1;
//	int right_shift_number = 2;
//	int and_number = 0b1010;
//	int or_number = 0b0101;
//	int xor_number = 0b1111;
//
//	base_number += add_number;
//	printf("%d\n", base_number);
//	base_number -= sub_number;
//	printf("%d\n", base_number);
//	base_number *= mul_number;
//	printf("%d\n", base_number);
//	base_number /= div_number;
//	printf("%d\n", base_number);
//	base_number %= mod_number;
//	printf("%d\n", base_number);
//	base_number <<= left_shift_number;
//	printf("%d\n", base_number);
//	base_number >>= right_shift_number;
//	printf("%d\n", base_number);
//	base_number &= and_number;
//	printf("%d\n", base_number);
//	base_number |= or_number;
//	printf("%d\n", base_number);
//	base_number ^= xor_number;
//	printf("%d\n", base_number);
//	return 0;
//}

//#include <stdio.h>
//#include <inttypes.h>
//
//int main(){
//	//���±���������������
//	uint32_t a = 1, b = 1, c = 1;
//	uint32_t result = (a += 1, b += 2, c += 3);
//
//	printf("a = %d, b = %d, c = %d, result = %d\n", a, b, c, result);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main() {
//
//	uint32_t number = 99;
//
//	if (number > 10) {
//		printf("���������10\n");
//	}
//	else {
//		printf("�����С�ڵ���10\n");
//	}
//
//	if (number >= 100) {
//		printf("��������ڵ���100!\n");
//	}
//	
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main() {
//
//	float current_temperature = -30.0f;
//
//	if (current_temperature > 35.0) {
//		printf("�������ˣ���Ҫ���յ�ů��");
//	}
//	else if (-15 <= current_temperature < -1) {
//		printf("����̫���ˣ���Ҫ���յ�����");
//	}
//	else if (current_temperature < -15) {
//		printf("���Ŷ�");
//	}
//	else  {
//		printf("����Ҫ���յ�");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main() {
//
//	double cart_total;
//
//	bool is_vip;
//
//	double discount_rate = 0.0;
//
//	is_vip = true;
//	cart_total = 120;
//
//	if (is_vip) {
//		if (cart_total > 50) {
//			discount_rate = 0.20;
//		}
//		else {
//			discount_rate = 0.05;
//		}
//	}
//	else if (cart_total >50) {
//		discount_rate = 0.10;
//	}
//	else {
//		discount_rate = 0.00;
//	}
//
//	printf("�����ۿ�Ϊ ��%.2f%%\n", discount_rate * 100);
//
//	return 0;
//}

//�Ľ�Ƕ��
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main() {
//
//	double cart_total;
//
//	bool is_vip;
//
//	double discount_rate = 0.0;
//
//	is_vip = true;
//	cart_total = 120;
//
//	if (is_vip) {
//		if (cart_total > 50) {
//			discount_rate = 0.20;
//		}
//		else {
//			discount_rate = 0.05;
//		}
//	}
//	else {
//		if (cart_total > 50) {
//			discount_rate = 0.1;
//		}
//		else {
//			discount_rate = 0.0;
//		}
//	}
//
//	printf("�����ۿ�Ϊ ��%.2f%%\n", discount_rate * 100);
//
//	return 0;
//}