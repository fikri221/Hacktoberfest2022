#include <stdio.h>
#define MAX_EL 100

int main()
{
    int BIL[MAX_EL];
    int N, x;

    printf("Masukkan banyaknya elemen array: ");
    scanf("%d", &N);

    // Mengisi elemen array
    for (size_t i = 0; i < N; i++)
    {
        printf("BIL[%d] = ", i);
        scanf("%d", &BIL[i]);
    }

    printf("Masukkan nilai yang akan dicari: ");
    scanf("%d", &x);

    // Melakukan pencarian elemen array
    int k = 0;
    while ((k < N) && (BIL[k] != x))
    {
        k++;
    }

    // Menyimpulkan hasil pencarian
    if (BIL[k] == x)
    {
        printf("%d berhasil ditemukan, yaitu pada indeks ke-%d", x, k);
    }
    else
    {
        printf("%d gagal ditemukan dalam array", x);
    }

    return 0;
}