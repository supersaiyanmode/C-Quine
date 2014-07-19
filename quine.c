#define REPB(X) X; strcat(str,"REPB("#X")\n");
#define REPA(X) strcat(str,"REPA("#X")\n"); X
#include <stdio.h>
#include <string.h>
char str[1024];
int main(void) {
REPB(printf("%s\n", "#define REPB(X) X; strcat(str,\"REPB(\"#X\")\\n\");");)
REPA(printf("%s\n", "#define REPA(X) strcat(str,\"REPA(\"#X\")\\n\"); X");)
REPA(printf("%s\n", "#include <stdio.h>");)
REPA(printf("%s\n", "#include <string.h>");)
REPA(printf("%s\n", "char str[1024];");)
REPA(printf("%s\n", "int main(void) {");)
REPA(printf("%s", str); printf("return 0;\n}");)
return 0;
}