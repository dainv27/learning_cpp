### Thư viện chứa các hàm thao tác với file
```c
#include <stdio.h>
```

### Cú pháp thao tác với file
```c
/**
* ten_con_tro_file: Tên con tro file
* __duong_dan_file: Đường dẫn tới file
* __mode: Chế độ tao tác với file: 
*       - "w": Ghi file
*       - "r": Đọc file
**/


FILE *<ten_con_tro_file> = fopen("__duong_dan_file", "__mode"); // Mở file cân đọc

fclose(file); // Đóng file cần đọc khi đã thao tác xong
```

### Các hàm cơ bản thao tác với file
- Mở file: 
```c
FILE *fopen(const char *filename, const char *mode)
```

- Đóng file: 
```c
int fclose(FILE *stream)
```

- Xóa filename đã cho để nó không thể truy cập được nữa:
```c
int remove(const char *filename)
```

- Đổi tên file
```c
int rename(const char *old_filename, const char *new_filename)
```

- Ghi dữ liệu từ mảng được trỏ bởi ptr tới Stream đã cho:
```c
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
```

- Gửi output đã được định dạng tới một Stream:
```c
fprintf(FILE *stream, const char *format, ...)
```

- Gửi output đã được định dạng tới một stdout:
```c
int printf(const char *format, ...)
```

- Gửi output đã được định dạng tới một chuỗi string:
```c
int sprintf(char *str, const char *format, ...)
```

- Gửi output đã được định dạng tới một stream bởi sử dụng một danh sách tham số:
```c
vfprintf(FILE *stream, const char *format, va_list arg)
```
