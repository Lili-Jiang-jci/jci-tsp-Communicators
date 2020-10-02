#include <stdio.h>
//check other headers

int main()
{
  int i;
  UINT8 in[6]={1,2,3,4,5,6};
  UINT8 out1[6];
  UINT8 out2[6];
  UINT8 key[4]={5,6,7,8};
  encryptPacket(in, 6, out1, key);
  decryptPacket(out1, 6,out2,key);
  printf("\nIn \n");
  for(i=0; i<6; i++)
    printf("%d ", in[i]);
  printf("\nencoded \n");
  for(i=0; i<6; i++)
    printf("%d ", out1[i]);
  printf("\ndecoded \n");
  for(i=0; i<6; i++)
    printf("%d ", out2[i]);

}
