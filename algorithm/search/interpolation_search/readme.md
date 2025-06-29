# Pseudocode
```
Hàm InterpolationSearch(A, n, X):
    left ← 0
    right ← n - 1

    Trong khi left ≤ right và X ≥ A[left] và X ≤ A[right]:
        // Ước lượng vị trí
        pos ← left + ((X - A[left]) × (right - left)) / (A[right] - A[left])

        Nếu A[pos] == X:
            Trả về pos  // Tìm thấy

        Nếu A[pos] < X:
            left ← pos + 1  // Di chuyển sang bên phải

        Ngược lại:
            right ← pos - 1 // Di chuyển sang bên trái

    Trả về -1  // Không tìm thấy

```

# Interpretation
- Interpolation Search sử dụng công thức nội suy để ước lượng vị trí phần tử cần tìm.
- Nó hoạt động tốt khi dữ liệu sắp xếp tăng và phân bố gần đều, ví dụ như [10, 20, 30, 40, 50, ...].
```
pos = left + ((X - A[left]) × (right - left)) / (A[right] - A[left])
```

# Note
- Thuật toán nhanh hơn Binary Search trong mảng có phân bố đều.
- Nhưng có thể bị sai số hoặc giảm hiệu quả nếu mảng không đều, hoặc có giá trị trùng lặp nhiều.
- Cần kiểm tra điều kiện: `A[right] != A[left]` để tránh chia cho 0.
