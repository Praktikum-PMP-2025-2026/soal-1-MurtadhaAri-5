/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 05 - Foundation of Algorithm
 *   Hari dan Tanggal    : Senin, 11 April 2026 
 *   Nama (NIM)          : Murtadha Al-Askari(13224048)
 *   Nama File           : Peta_Terowongan.c
 *   Deskripsi           : Mencari Max_Vertex, Degree yang ada dan ISOLATED pada program matrix
 * 
 */

#include <stdio.h>
#include <string.h>

int main(){
    int N = 0;
    int matrix[132][112];
    int degree[100] = {0};
    int max_deg = -1;
    int max_vertex = 0;
    int isolated_count = 0;
    scanf("%d", &N);
    for(int i =0;i<N;i++){
        for(int j = 0; j<N;j++){
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == 1){
                degree[i]+=1;
            }
        }
    }

    // for(int i =0;i<N;i++){
    //     for(int j = 0; j<N;j++){
    //         // printf("indeks [i][j] = [%d][%d] dengan matrix[i][j] = matrix[%d][%d]\n", i+1, j+1, matrix[i][j]);
    //         // printf("matrix[i][j] = matrix[%d][%d]", matrix[i][j]);

    //     }
    // }

    for(int i =0;i<N;i++){
        printf("DEGREE %d %d\n",i, degree[i] );
        if(degree[i]>max_deg){
            max_deg = degree[i];
            max_vertex = i;
        }
        if(degree[i]==0){
            isolated_count ++;
        }
    }


    printf("MAX_VERTEX %d\n", max_vertex);


    printf("ISOLATED ");
    if(isolated_count==0){
        printf("NONE");
    }
    else{
        int temp = 0;
        for(int i = 0;i<N;i++){
            if(degree[i]==0){
                printf("%d", i);
                temp++;
                if(temp<isolated_count){
                    printf(" ");//blom ada haislnya
                }
            }
        }
    }
    printf("\n");


    return 0;
}
