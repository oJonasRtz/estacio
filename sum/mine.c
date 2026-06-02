#include <stdio.h>

int main(void)
{
	int nums[2];
	char* texts[] = {
		"Digite o primeiro número: ",
		"Digite o segundo número: ",
		"A soma de %d e %d é: %d\n"
	};

	for (int i = 0; i < 3; i++) {
		if (i == 2) {
			printf(texts[i], nums[0], nums[1], nums[0] + nums[1]);
			break;
		}
		printf("%s", texts[i]);
		scanf("%d", &nums[i]);
	}

	return (0);
}
