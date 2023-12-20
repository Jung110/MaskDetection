# Flow
![image](https://github.com/Jung110/MaskDetection/assets/86052918/2b3fc7e1-4a64-4ff2-ba03-b4b30834dabb)
1. 1차로 kaggle 과 git hub에 있는 마스크 이미지를 수집한다. 
2. Selenium 라이브러리를 사용하여 구글 크롤링을 통하여 마스크 이미지를 추가로 수집한다.
3. 1,2에서 수집한 이미지를 크기 조절, 및 증강을 해주어 데이터의 개수를 늘린다.
4. 해당 데이터를 사용하여 CNN 및 TensorFlow에서 제공해주는 Pre_trained 모델을 훈련 시켜 평가를 
   진행한다.
5. https://www.makesense.ai/ 해당 사이트를 통해 이미지 라벨링과 바운딩 박스를 설정 한다.
6. 그 후 라벨링 한 데이터를 통해 YOLO 훈련을 진행한다.
7. 안드로이드에 OpenCv SDK를 설치 후 OpenCv와 안드로이드(스마트폰)의 카메라를 이용하여 실시간으로 객체 탐지를 한다. 

# 실행 화면
![image](https://github.com/Jung110/MaskDetection/assets/86052918/69461c27-557e-43cc-a221-c322ec902229)
해당 화면은 안드로이드 스마트폰에 제작한 앱을 설치 및 실행 후 YOLO버튼을 누른 뒤의 화면이다.
