## Điều kiện:
- Mảng đầu vào đã được sắp xếp tăng dần

## Pseudocode:
```
Hàm BinarySearch(mảng A, giá_trị cần tìm X):
    left ← 0
    right ← độ dài của A - 1

    Trong khi left ≤ right:
        mid ← (left + right) / 2

        Nếu A[mid] == X:
            Trả về mid  // Đã tìm thấy tại vị trí mid

        Nếu A[mid] < X:
            left ← mid + 1  // Bỏ qua nửa trái

        Ngược lại:
            right ← mid - 1 // Bỏ qua nửa phải

    Kết thúc vòng lặp
    Trả về -1  // Không tìm thấy

```

## Interpretation

Bước 1: Khởi tạo `left = 0`, `right = n - 1`

Bước 2: Tính chỉ số giữa `mid = (left + right) / 2`

Bước 3:
- Nếu phần tử ở giữa bằng X → Trả về vị trí.
- Nếu `A[mid] < X` → tìm bên phải `(left = mid + 1)`
- Nếu `A[mid] > X` → tìm bên trái `(right = mid - 1)`

Bước 4: Nếu không tìm thấy → Trả về `-1`.
