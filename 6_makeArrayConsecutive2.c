// Definition for arrays:
// typedef struct arr_##name {
//   int size;
//   type *arr;
// } arr_##name;
//
// arr_##name alloc_arr_##name(int len) {
//   arr_##name a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//   return a;
// }
//
//

int makeArrayConsecutive2(arr_integer statues) {
    int min = statues.arr[0], max = statues.arr[0];

    for (unsigned int i = 0; i < statues.size; i++) {
        max = statues.arr[i] > max ? statues.arr[i] : max;
        min = statues.arr[i] < min ? statues.arr[i] : min;
    }

    return max - min - statues.size + 1;
}
