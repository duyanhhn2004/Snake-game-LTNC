# ***Tony's maze*** 

## **Introduction** 

+ Họ và tên: Nguyễn Duy Anh - K67T CLC - UET

+ Mã sinh viên: 22024542

+ Bài tập lớn: Tony's maze (INT2215_70- Lập trình nâng cao) 

## **Description** 
### *Game description and instruction* 
- Mô tả chung về trò chơi, các ý tưởng chính
  - Trò chơi có tên Tony's maze, hãy giúp chú ma Tony thoát khỏi mê cung
  - Sử dụng bàn phím để điều khiển và tránh đụng vào thành mê cung
  - Lấy ý tưởng là sự kết hợp của game Pacman và game giải mã mê cung
  - Nếu người chơi điều khiển nhân vật chạm vào tường hoặc chứng ngại vật màn hình sẽ tự động hiện you lose
  - Điều khiển nhân vật đến dấu mũi tên sẽ chiến thắng và màn hình hiện you win
  - Có âm thanh êm dịu thoải mái khi chơi
### *Control* 

| Control | Player   |
|---------|----------|
| UP      |     ↑    |     
| DOWN    |     ↓    |     
| LEFT    |     ←    |     
| RIGHT   |     →    |     
### *Preview* 
![Screenshot 2024-08-18 224429](https://github.com/user-attachments/assets/cbcf9c3e-b74c-4639-9149-cb11ceed25c7)
![Screenshot 2024-08-05 095113](https://github.com/user-attachments/assets/740a519c-fe75-48a7-b6c6-00f01ae884d3)
![Screenshot 2024-08-05 100107](https://github.com/user-attachments/assets/f365fcfb-2405-4066-b713-eb9a02825a8b)
![Screenshot 2024-08-05 100049](https://github.com/user-attachments/assets/ff2b1b84-4756-41a7-bb4d-58ef9127fb6a)

![Screenshot 2024-08-05 100024](https://github.com/user-attachments/assets/503ad456-1801-4ec4-b1ec-7d68c8919272)
## **Setup**
- Tải Code::Blocks 20.03
  - Tải thư viện đồ họa SDL, SDL_image, SDL_ttf, SDL_mixer và cài đặt các đường dẫn vào Code::Blocks
  - Copy link code của github
  - Sử dụng cửa sổ Git Bash, ấn cd + "Tên folder muốn đưa dự án về"
  - Sử dụng lệnh git clone +  https://github.com/scallop200603/Tony-s-maze
  - Copy folder đã chứa đầy đủ file ra ngoài
  - Mở Code::Blocks, ấn "Open an existing project" sau đó tìm tới folder mình vừa cho ra ngoài, ấn vào folder và ấn vào file "tony's maze.cbp"
## **See also**  

### *Các kỹ thuật sử dụng* 
 - Em có dùng SDL_image và SDL_ttf để làm hiện ra hình ảnh mở đầu và 2 dòng chữ trên đó
  - Bên cạnh đó em dùng thư viện SDL_mixer để tạo âm thanh xuyên suốt trò chơi
  - Sau đó là một loạt các thành mê cung là các SDL_Rect (hình chữ nhật) xuất hiện hỗn độn không có quy luật
  - Sử dụng SDL_WaitEvent bắt sự kiện từ bàn phím
     + Khi ấn mũi tên lên thì Tony sẽ đi lên
     + Khi ấn mũi tên xuống thì Tony sẽ đi xuống
     + Khi ấn mũi tên phải thì Tony sẽ đi sang phải
     + Khi ấn mũi tên trái thì Tony sẽ đi sang trái
  - Các kỹ thuật lập trình có trong dự án: con trỏ, struct, thư viện đồ họa SDL, mảng một chiều
  - Kết luận: với thư viện đồ họa SDL kết hợp với những kiến thức về C++(con trỏ, mảng, struct,..), ta có thể làm được những game từ đơn giản tới phức tạp, trong quá trình cài đặt các thư viện đồ họa cần phải chú ý các đường dẫn tới file chứa các mục phải chính xác, bên cạnh đó nên chia dự án thành các file nhỏ hơn để code dễ nhìn và ngắn gọn hơn
 ## **Conclusion** 

### ***Điều tâm đắc***
-Biết sử dụng cơ bản thư viện đồ họa, đây cũng là một cơ hội để phô diễn những kỹ năng mà mình đã tích lũy được suốt thời gian học qua, biết cách xử lý vấn đề, không còn quá hoảng loạn khi gặp sự cố
### ***Điểm hạn chế*** 
-không kịp hoàn thiện các chứng ngại vật di chuyển được
### ***Hướng phát triển*** 
- hoàn thiện chứng ngại vật có thể di chuyển được trong mê cung (gồm 4 con) :
  + Con thứ 1: đuổi theo Tony
  + con thứ 2: đi đến vị trí trước mặt 4 ô
  + con thứ 3: đi đến vị trí được tạo bằng cách đối xứng vị trí của con thứ 1 và qua tâm của Tony
  + con thứ 4: đuổi theo Pacman nếu khoảng cách giữa nó và Pacman lớn hơn 8 ô, nếu không thì nó sẽ về góc của mình.  
