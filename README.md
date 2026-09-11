# SW 과제

# ✅SW 직군 사전 과제 안내문

### 📍아래 과제를 확인하신 후, 1️⃣번 기본 과제 필수 제출 바랍니다.
### 2️⃣번 심화 과제는 선택 사항이며, 희망하시는 경우 두 과제를 모두 수행하여 제출하셔도 됩니다.
### 📍두 과제 모두 진행할 경우, 저장소 링크를 각각 제출 바랍니다.

## 📝 과제 내용
### 1️⃣CLI 기반 이미지 처리 프로그램 구현(기본 과제)

📍과제 제출처: [hr@iglim.net](mailto:hr@iglim.net)  
📍제공 코드

[ImageProcessor\_Starter.zip](https://t25596452.p.clickup-attachments.com/t25596452/fc80d3ed-e845-4003-b9d8-1b07edf44dbe/ImageProcessor_Starter.zip)

![](https://t25596452.p.clickup-attachments.com/t25596452/0e9cfe47-dece-4dfa-b00b-1d9ec28efb7b/image.jpg)
![](https://t25596452.p.clickup-attachments.com/t25596452/c6c6a2ec-a9df-45b2-adc2-8de4b196f210/image.jpg)![](https://t25596452.p.clickup-attachments.com/t25596452/01582609-ee4f-40d8-b73b-a32034542b37/image.jpg)![](https://t25596452.p.clickup-attachments.com/t25596452/cf043da9-5805-4cf9-a6ac-c8a1899885be/image.jpg)![](https://t25596452.p.clickup-attachments.com/t25596452/79cce42b-8a3f-48a2-9661-1eca39fd3ec3/image.jpg)

###  2️⃣ 유튜브 과제(심화 과제)

이 [링크](https://youtube.com/playlist?list=PLlIX4lkC1JdMx-vfK8I-J3-L-GL7TbMf9&si=VqwjifaHOXGIT1dm) 재생목록 영상들을 시청하고 아래 요구사항에 대해 구현, Github에 업로드 후 저장소 링크를 메일로 전달해주시기 바랍니다.  
메일: [hr@iglim.net](mailto:hr@iglim.net)  

#### **📍요구사항**
*   아래 그림의 순서대로 조작하여 요구사항들을 모두 만족하는 프로그램을 작성합니다.  
*   세 번째 클릭 이후에 클릭 지점 3개를 모두 지나가는 정원 1개를 그립니다.  
*   클릭 지점 원을 그릴 때의 반지름 크기는 사용자로부터 입력 받습니다.  
*   각 클릭 지점 원의 중심 좌표를 UI에 표시합니다.  
*   네 번째 클릭부터는 클릭 지점 원을 그리지 않습니다.  
*   세 클릭 지점을 지나가는 정원의 내부는 채워지지 않아야 하며, 가장자리 두께는 사용자로부터 입력 받습니다.  
*   클릭 지점 3개 중 하나를 클릭하고 드래그 했을 때 정원을 다시 그립니다.  
*   이 때, 마우스 커서 좌표가 바뀌는 동안, 즉 마우스 드래그 상태가 끝날 때까지 정원이 계속해서 이동하며 그려져야 합니다.  
*   \[초기화\] 버튼을 누르면 그려졌던 모든 내용들을 삭제하고 처음부터 입력 받을 수 있는 상태가 되어야 합니다.  
*   정원이 그려진 상태에서 \[랜덤 이동\] 버튼을 누르면 3개의 클릭 지점 원 모두를 랜덤한 위치로 이동시킵니다.  
*   이 때, 정원 또한 마찬가지로 다시 그려져야 합니다.  
*   랜덤한 위치로 이동 및 정원 그리기 동작을 초당 2회, 총 10번 자동으로 반복하되, 메인 UI가 프리징 상태가 되지 않도록 별도 쓰레드로 구현해야 합니다.  
*   MFC Dialog 기반 프로젝트로 작성해야 합니다.  
*   클릭 지점 원과 정원을 그릴 때 아래 종류의 API를 사용하면 안 되며, 안내한 유튜브 영상에 나오는 방식으로 그려야 합니다.  
    *   \`wingid\`, \`gdiplus\`, \`Ellipse\`류, \`FillPolygon\`, \`DrawPolygon\` 등 사용 금지  

![](https://t25596452.p.clickup-attachments.com/t25596452/c4054459-72f9-47eb-8eac-82a5aca5ff29/image.png)

\- 정원이 그리기 영역을 벗어나는 경우는 아래와 같이 전체 원이 표시되지 않아도 됩니다.  

![](https://t25596452.p.clickup-attachments.com/t25596452/aeacc25f-e5ab-47ba-8967-6b32871eedbc/image.png)

###
