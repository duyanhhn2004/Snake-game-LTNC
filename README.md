# ***Tony -s -maze*** 

## **Introduction** 

+ Họ và tên: Nguyễn Duy Anh - K67T-CLC - UET

+ Mã sinh viên: 22024542

+ Bài tập lớn: Tony-s-maze (INT2215_70 - Lập trình nâng cao) 

## **Description** 
### *Game description and instruction*
  - Trò chơi có tên Tony's maze, hãy giúp chú ma Tony thoát khỏi mê cung
  - Sử dụng bàn phím để điều khiển và tránh đụng vào thành mê cung
  - Có âm thanh êm dịu thoải mái khi chơi
  - Link video minh họa:
### *Control* 
- Sử dụng SDL_WaitEvent bắt sự kiện từ bàn phím
     + Khi ấn mũi tên lên thì Tony sẽ đi lên
     + Khi ấn mũi tên xuống thì Tony sẽ đi xuống
     + Khi ấn mũi tên phải thì Tony sẽ đi sang phải
     + Khi ấn mũi tên trái thì Tony sẽ đi sang trái
### *Preview* 
![](![Screenshot 2024-08-05 095113](https://github.com/user-attachments/assets/41f0f9fa-ab68-4153-b191-5b5b1237e739)
)
![](![Screenshot 2024-08-05 100024](https://github.com/user-attachments/assets/f9b915bd-9f82-4bc4-b642-a11554edfbd8)
) 
![](![Screenshot 2024-08-05 100049](https://github.com/user-attachments/assets/28486c92-3653-4ccd-9505-b6502c50c431)
)
## **Setup** 
- Hướng dẫn cài đặt chương trình
  - Tải Code::Blocks 20.03
  - Tải thư viện đồ họa SDL, SDL_image, SDL_ttf, SDL_mixer và cài đặt các đường dẫn vào Code::Blocks
  - Copy link code của github
  - Sử dụng cửa sổ Git Bash, ấn cd + "Tên folder muốn đưa dự án về"
  - Sử dụng lệnh git clone +  https://github.com/duyanhhn2004/Snake-game-LTNC.git
  - Copy folder đã chứa đầy đủ file ra ngoài
  - Mở Code::Blocks, ấn "Open an existing project" sau đó tìm tới folder mình vừa cho ra ngoài, ấn vào folder và ấn vào file "obstacle.cbp"
## **See also**  

### *Các kỹ thuật sử dụng*  
- Các kỹ thuật lập trình có trong dự án: con trỏ, struct, thư viện đồ họa SDL, mảng một chiều
- Em có dùng SDL_image và SDL_ttf để làm hiện ra hình ảnh mở đầu và 2 dòng chữ trên đó
- Bên cạnh đó em dùng thư viện SDL_mixer để tạo âm thanh xuyên suốt trò chơi
- Sau đó là một loạt các thành mê cung là các SDL_Rect (hình chữ nhật) xuất hiện hỗn độn không có quy luật
