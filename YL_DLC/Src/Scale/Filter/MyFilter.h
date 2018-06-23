#ifndef __MYFILTER_
#define __MYFILTER_

#include <stdint.h>

#define FILTER_BUF_NUM 80

typedef struct FilterAryy
{
  int32_t valuebuf[FILTER_BUF_NUM+1]; // �˲�����
  uint32_t headpt; // ��ǰд���λ��
  uint32_t tailpt;
  uint32_t sampN;
  int32_t sum;
  int32_t filtervalue;
}strFiltertype;

// �ƶ�ƽ���˲�
int32_t CountsFilter(strFiltertype *PFilter,int32_t adcvalue);
// ��λֵƽ���˲�
int32_t MidAverageFilter(strFiltertype *PFilter,int32_t adcvalue);

#endif