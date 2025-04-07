#include <stdio.h>

int main() {

    int i, fq;
    unsigned int m;
    double p1, p2, p3, p4, p5, p6, p7, p8, l1, l2, l3, l4, l5, tf, nf;
    i = p1 = p2 = p3 = p4 = p5 = p6 = p7 = p8 = l1 = l2 = l3 = l4 = l5 = tf = fq = nf = 0;

    while(1) {
        scanf("%u %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d", &m, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &tf, &fq);

        if(p1 == -1) {
            break;
        }

        nf = 0.7 * ((p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8) / 8.0) + 0.15 * ((l1 + l2 + l3 + l4 + l5) / 5.0) + 0.15 * tf;

        if(nf >= 6 && fq >= 96) {
            printf("Matricula: %u, Nota Final: %.2lf, Situacao Final: APROVADO\n", m, nf);
        }

        else if(nf < 6.0 && fq < 96) {
            printf("Matricula: %u, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", m, nf);
        }

        else if(fq < 96) {
            printf("Matricula: %u, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", m, nf);
        }

        else if(nf < 6.0) {
            printf("Matricula: %u, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", m, nf);
        }
        
    }

    return 0;
}
