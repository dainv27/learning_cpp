## Pseudocode

```
Hàm SentinelSearch(mảng A, độ dài n, giá_trị cần tìm X):
    Tạo bản sao A' từ A và thêm phần tử X vào cuối làm vệ binh
    A[n] ← X  // Đặt X làm phần tử sentinel ở cuối mảng

    i ← 0
    Trong khi A[i] ≠ X:
        i ← i + 1

    Nếu i < n:
        Trả về i  // Tìm thấy tại vị trí i trong mảng gốc
    Ngược lại:
        Trả về -1 // Không tìm thấy trong mảng ban đầu

```
## Interpretation
1. Thêm phần tử cần tìm `X` vào cuối mảng như một "vệ binh".
2. Duyệt mảng không cần kiểm tra giới hạn mảng vì chắc chắn sẽ gặp `X` ở cuối. 
3. Sau khi tìm thấy `X`, kiểm tra xem chỉ số có nhỏ hơn n không:
4. Nếu có: `X` tồn tại trong mảng gốc. 
5. Nếu không: `X` chỉ là sentinel, không có trong mảng gốc.
