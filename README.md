[![Version](https://img.shields.io/cocoapods/v/WiseTracker.svg?style=flat)](https://cocoapods.org/pods/WiseTracker)
[![License](https://img.shields.io/cocoapods/l/WiseTracker.svg?style=flat)](https://cocoapods.org/pods/WiseTracker)
[![Platform](https://img.shields.io/cocoapods/p/WiseTracker.svg?style=flat)](https://cocoapods.org/pods/WiseTracker)

# Index
* [WiseTracker](./README.md#DOT)
	* [SDK 삽입과 프로젝트 설정](./README.md#WISETRACKER_INSTALL)
		* [CocoaPod Install](./README.md#WISETRACKER_COCOAPOD)
		* [Github Download](./README.md#WISETRACKER_GITHUB)
	* [WebView 설정](./README.md#WISETRACKER_WEBVIEW)
	* [Cordova를 위한 설정](./README.md#WISETRACKER_CORDOVA)
	* [필수연동 API](./README.md#WISETRACKER_BASE)
	* [Premium 연동 API](./README.md#WISETRACKER_PREMIUM)
	* [Facebook 광고성과 분석을 위한 설정](./README.md#WISETRACKER_FACEBOOK)
	* [WAFI 설정](./README.md#WISETRACKER_WAFI)

	
	
# WiseTracker

## <a id="WISETRACKER_INSTALL"></a> SDK 다운로드 및 설치

### - CocoaPod Install

- XCode CocoaPad 환경에서 SDK 다운로드 방법


XCode 프로젝트 파일중 Podfile 파일에 다음과 같이 SDK를 추가합니다.

```
pod 'WiseTracker'
```

기존에 SDK를 한번 설치한 경우에는 설치할SDK 버전을 표시해야 하는 경우도 있습니다. 아래와 같이 설치할 SDK버전을 명시적으로 표시하면 됩니다.

```
pod 'WiseTracker', '~> 21.3.3'
```

Podfile 에 해당라인을 추가한 후 Terminal 프로그램을 실행하여 다음의 명령을 수행합니다.
```
cmd> pod install
```

만약 Cocoapad 환경의 프로젝트가 아닌 경우에는, 아래 방법을 사용해 주세요.
아래 5번부터는 공통으로 적용해야하는 부분입니다.

### - Github Download

#### 1. 아래 링크로 접속하여 최신버전 SDK를 선택합니다.

[Wisetracker Mobile Analytics SDK 다운로드 받기](https://github.com/WisetrackerTechteam/SDK)

#### 2. iOS용 SDK인 WiseTracker.framework.zip을 선택하여 다운로드 합니다.

![](http://www.wisetracker.co.kr/wp-content/uploads/2018/01/sdk003.png "")

다운로드한 파일의 압축을 해제하면 되며, 포함된 파일 중 중요 파일에 대한 설명은 다음과 같습니다.

- iosGetFkey.html : Fingerprint를 위한 HTML 페이지
- WiseTracker.framework : iOS SDK
- WKInterface.js : WKWebView용 인터페이스 파일

#### 3. WiseTracker.framework를 Xcode에 추가합니다.
##### 1) Project – Target – BuildPhase – Link Binary With Libraries의 “+” 버튼을 클릭합니다.
##### 2) 팝업창에 Add Other에서 SDK를 추가하고 확인 버튼을 클릭합니다.

![](https://dzf8vqv24eqhg.cloudfront.net/userfiles/6274/8379/ckfinder/images/002.jpg?dc=201702100612-24 "")

#### 4. 다운로드한 파일 중 ‘iosGetFkey.html’을 프로젝트에 추가합니다.
##### 1) Project – Target – BuildPhase – Copy Bundle Resources의 “+” 버튼 클릭
##### 2) iosGetFkey.html 선택

![](https://dzf8vqv24eqhg.cloudfront.net/userfiles/6274/8379/ckfinder/images/003.png?dc=201702100613-12)

#### 5. iOS에서 제공하는 라이브러리와 Build Settings에 설정을 추가합니다.
##### 1) Project – Target – BuildPhase – Link Binary With Libraries의 “+” 버튼을 클릭해 다음 4가지 라이브러리를 추가합니다.
 - CoreTelephony.framework
 - Systemconfigureation.framework
 - JavascriptCore.framework
 - WebKit.framework

![](https://dzf8vqv24eqhg.cloudfront.net/userfiles/6274/8379/ckfinder/images/004(1).png?dc=201702100616-71)

##### 2) libz.dylib framework 사용과 관련하여 NSData 확장 타입을 활용하기 위해 Build Settings – Linking – Other Linker Flags에 아래의 값을 추가합니다.

![](https://dzf8vqv24eqhg.cloudfront.net/userfiles/6274/8379/ckfinder/images/005.jpg?dc=201702100618-18)

#### 6. 아래의 방법을 따라 AppKey를 복사한 뒤 적용합니다.

#### 1) [http://report.wisetracker.co.kr](http://report.wisetracker.co.kr)에 로그인 합니다.

#### 2) 설정 – 기본설정 – 서비스 – iOS 분석코드(AppKey) 클릭 – 언어에 맞는 AppKey를 복사 후 적용합니다.

![](https://dzf8vqv24eqhg.cloudfront.net/userfiles/6274/8379/ckfinder/images/006.png?dc=201702100619-66)

#### 3) 복사한 분석코드를 SDK 적용 대상 프로젝트의 AppDelegate class – didFinishLaunchingWithOptions method에 아래와 같이 저장합니다.

- Objective-C : #import<WiseTracker/WiseTracker.h>
 
```Objective-C
#import<WiseTracker/WiseTracker.h>
-(BOOL)application:(UIApplication *)applicationdidFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
	[WiseTracker applicationKey:@"앱의 APPKEY 삽입"];
	[WiseTracker setApplication:application];
	[WiseTracker initEnd];
	return YES;
}
```

- Swift : import WiseTracker

```Swift
func application(application: UIApplication, didFinishLaunchingWithOptionslaunchOptions: [NSObject: AnyObject]?) -&gt;Bool {
	WiseTracker.applicationKey("앱의 APPKEY 삽입")
	WiseTracker.setApplication(application)
	WiseTracker.initEnd()
	return true
}
```

#### 7. 광고를 통해 앱을 실행할 경우에도 패키지명, Referrer 값을 수신할 수 있도록 Project 파일에 설정정보를 추가합니다.

- Objective-C

```Objective-C
-(BOOL)application:(UIApplication *)application openURL:(NSURL *)urlsourceApplication:(NSString *)sourceApplication annotation:(id)annotation{
	[WiseTracker applicationKey:@"앱의 APPKEY 삽입"];
	[WiseTracker setApplication:application];
	[WiseTracker initEnd];
	[WiseTracker urlRefererCheck:sourceApplication url:url]
	return YES;
}
```

- Swift

```Swift
func application(application: UIApplication, openURL url: NSURL, sourceApplication: String?, annotation: AnyObject?) ->Bool {
	WiseTracker.applicationKey("앱의 APPKEY 삽입")
	WiseTracker.setApplication(application)
	WiseTracker.initEnd()
	WiseTracker.urlRefererCheck(sourceApplication,url: url)
	return true
}
```


## <a id="WISETRACKER_WEBVIEW"></a> WebView 설정

웹뷰에 몇가지 설정을 추가하여 하이브리드 앱도 분석할 수 있습니다. 와이즈트래커는 UIWebView와 WKWebView를 지원하고 있으며, 분석을 위한 설정이 각각 다릅니다.

### 1. UIWebView

- Objective-C

```Objective-C
-(void)webViewDidFinishLoad:(UIWebView *)webView{
	[WiseTracker injectTracker:webView];
}
```

- Swift


```Swift
func webViewDidFinishLoad(webView :UIWebView){
	WiseTracker.injectTracker(webView);
}
```

### 2.WKWebView

#### 1) SDK 파일에 포함되어 있는 WKInterface.js를 iosGetFkey.html과 동일한 위치에 복사합니다.
#### 2) WKUserContentController 클래스에 WiseTracker 이벤트 핸들러를 추가합니다.

- Objective-C

```Objective-C
// WKWebViewConfiguration 인스턴스 생성
_webConfig = [[WKWebViewConfiguration alloc]init];

// 사용자 스크립트 삽입을 위한 WKUserContentController 인스턴스
WKUserContentController* userController = [[WKUserContentController alloc]init];

// WiseTrackerHandler 추가
[WiseTracker addWiseTrackerHandler:userController];

// WKUserContentController로 WKWebViewConfiguration 인스턴스 설정 
_webConfig.userContentController = userController;
```

#### 3) 고객사가 구현한 ViewController의 didFinishNavigation에 inject 함수를 추가합니다. (기존의 webViewDidFinishLoad 함수)

- Objective-C

```Objective-C
- (void)webView:(WKWebView *)webView didFinishNavigation:(WKNavigation *)navigation { 
	// webView 삽입
	[WiseTracker injectWKTracker:webView];
}
```


## <a id="WISETRACKER_CORDOVA"></a> Cordova를 위한 설정

Cordova 사용 시 아래 가이드를 참고하여 적용하시면 됩니다.

### 1. Plugman 설치
Cordova 환경에서 원격지에(github) 존재하는 라이브러리를 설치하기 위해서 plugman 을 먼저 설치해야 합니다. 이미 plugman 을 사용하고 있다면, 이 과정은 진행하지 않아도 됩니다.


```node
$ npm install -g plugman@1.5
```

### 1-1. Plugman Version 확인 ( recommend : 1.5 version ) 
설치된 plugman 정보를 확인합니다.
간혹 plugman version 이 2.0 인 경우에 원격지의 라이브러리가 설치되지 못하는 현상이 있습니다. 이 경우에는 잠시 plugman 을 1.5 버전으로 다운시켜 라이브러리를 설치하고 다시 업그레이드 하셔도 됩니다.

```node
$ plugman –v
```

### 2. SDK설치
설치된 plugman 을 사용하여 다음과 같이 원격지에(github) 준비된 SDK를 Cordova 프로젝트에 설치합니다.

```node
$ plugman install -d --platform ios --project [프로젝트경로]/platforms/ios --plugin https://github.com/WisetrackerTechteam/WiseTrackerCordova.git
```


### 3. SDK 초기 설정
SDK 설치가 완료되면 Xcode에 다음과 같이 SDK 사용을 위한 파일이 추가된 것을 확인합니다.

![](http://www.wisetracker.co.kr/wp-content/uploads/2019/04/ios-cordova-addfile.jpg)


다음으로, Cordova 프로젝트의 index.js 파일에 SDK를 초기화하는 코드를 추가합니다.

![](http://www.wisetracker.co.kr/wp-content/uploads/2019/04/ios-cordova-indexjs.jpg)

- index.js 코드 예시

```java script
var app = {
    // Application Constructor
    initialize: function() {
        document.addEventListener('deviceready', this.onDeviceReady.bind(this), false);
    },

    // deviceready Event Handler
    //
    // Bind any cordova events here. Common events are:
    // 'pause', 'resume', etc.
    onDeviceReady: function() {
        this.receivedEvent('deviceready');
    },

    // Update DOM on a Received Event
    receivedEvent: function(id) {
        var parentElement = document.getElementById(id);
        var listeningElement = parentElement.querySelector('.listening');
        var receivedElement = parentElement.querySelector('.received');

        listeningElement.setAttribute('style', 'display:none;');
        receivedElement.setAttribute('style', 'display:block;');

		/*
		** Wisetracker SDK 초기 설정 코드 적용 예시 
		**/
		cordova.plugins.WiseTrackerCordovaBridge.setWisetrackerAppkey("제공받은 앱 인증키를 설정합니다.");
		cordova.plugins.WiseTrackerCordovaBridge.init(); 
		WiseTracker.startPage();
    }
};

app.initialize();
```

## <a id="WISETRACKER_BASE"></a> 필수연동 API
필수연동 API는 Wisetracker의 기본기능을 활용하기 위해 반드시 적용해야 하는 코드들로 이루어져 있습니다. 필수연동 API의 코드들을 모두 적용할 것을 권장합니다.

### 1. StartPage(Object obj)
화면 분석을 위한 코드로, 앱 내 컨텐츠가 노출될 때 모든 iOS Activity의 onResume()에 아래와 같이 적용 합니다.

* startPage가 호출된 화면에서는는, 화면이 사라질 때 endPage가 호출되어야 합니다.

```Objective-C
-(void)viewWillAppear:(BOOL)animated{
	[WiseTracker startPage:self];
}
```

```Swift
override func viewWillAppear(animated: Bool) {
	WiseTracker.startPage(self)
}
```

### 2. endPage(Object obj)

앱 내 컨텐츠가 화면에서 사라질 때 사용합니다. 화면 분석을 위해서 가능한 모든 iOS 화면에 viewWillDisappear()에 아래와 같이 적용 합니다.

```Objective-C
- (void)viewWillDisappear:(BOOL)animated{
	[WiseTracker endPage:self];
}
```

```Swift
override func viewWillDisappear(animated: Bool) {
	WiseTracker.endPage(self)
}
```

### 3. WebPage(HTML) 분석 코드 적용
분석 대상 화면이 Native가 아닌 HTML 페이지인 경우에 분석 코드를 적용하는 방법입니다. JavaScript 코드를 사용하며, script 엘리먼트의 속성으로 type과 id 값을 아래와 같이 지정하면 됩니다.
- type : wisetracker/text
- id : wiseTracker


type과 id 값을 지정한 경우에만 WebView에 적용된 이벤트가 발생하는 시점에 참조되어 실행하게 됩니다. 따라서 type과 id를 지정하지 않은 코드는 아무런 동작을 하지 않습니다.

```Java script
<script type="wisetracker/text" id="wiseTracker">
	/**
	이 곳에 분석 코드를 적용하면 됩니다.
	**/
</script>
```

### 4. 주문/매출 분석
광고를 통해 유입된 사용자의 주문/매출액을 분석하기 위해 코드를 삽입합니다.

- 적용위치: 주문완료 페이지

#### 1) Objective-C

```Objective-C
구매금액 : [WiseTracker setOrderAmountArray:[A상품 구매 금액, B상품 구매 금액]];
주문수량 : [WiseTracker setOrderQuantityArray:[A상품 주문수량, B상품 주문수량]];
주문이 발생한 페이지 : [WiseTracker setPageIdentity:@"ODR"];

//적용예시
 [WiseTracker setOrderAmountArray:[10000, 20000]]; // 주문 상품 총액 (합계)
 [WiseTracker setOrderQuantityArray:[1, 2]]; // 주문
 [WiseTracker setPageIdentity:@"ODR"]; // 주문완료
```

#### 2) Swift

```Swift
구매금액 : WiseTracker.setOrderAmountArray([A상품 구매 금액, B상품 구매 금액])
주문수량 : WiseTracker.setOrderQuantityArray([A상품 주문수량, B상품 주문수량])
주문이 발생한 페이지 : WiseTracker.setPageIdentity("ODR")
 
//적용예시
 WiseTracker.setOrderAmountArray([10000, 20000]) // 주문 상품 총액 (합계)
 WiseTracker.setOrderQuantityArray([1, 2]) // 주문
 WiseTracker.setPageIdentity("ODR") // 주문완료
```

#### 3)WebView

```Java script
구매금액 : WiseTracker.setOrderAmountArray([A상품 구매 금액, B상품 구매 금액]);
주문수량 : WiseTracker.setOrderQuantityArray([A상품 주문수량, B상품 주문수량]);
주문이 발생한 페이지 : WiseTracker.setPageIdentity("ODR");
 
//적용예시
 <script type="wisetracker/text" id="wiseTracker">
 WiseTracker.setOrderAmountArray([10000, 20000]) // 주문 상품 총액 (합계)
 WiseTracker.setOrderQuantityArray([1, 2]) // 주문
 WiseTracker.setPageIdentity("ODR") // 주문완료
 </script>
```

## <a id="WISETRACKER_PREMIUM"></a> Premium 연동 API
Wisetracker의 모든 고급기능을 사용할 수 있는 Premium Plan을 도입했다면 아래 Premium 연동 API를 적용하여 고급기능에 필요한 데이터들을 앱에서 수집할 수 있게 됩니다.

### 1. 사용자 분석
사용자의 성별, 연령대, 회원등급 등을 분석하기 위해 해당 정보를 수집하는 코드를 삽입합니다.

- 적용위치 : 회원가입 완료화면 및 로그인 완료화면

#### 1) Objective-C
```Objective-C
남성 : [WiseTracker setGender:[WiseTrackerGENDER_MALE]];
여성 : [WiseTracker setGender:[WiseTrackerGENDER_FEMALE]];
기타 : [WiseTracker setGender:[WiseTrackerGENDER_ETC]];

10대 이하 : [WiseTracker setAge:[WiseTrackerAGE_0_TO_9]];
10대 : [WiseTracker setAge:[WiseTrackerAGE_10_TO_19]];
20대 : [WiseTracker setAge:[WiseTrackerAGE_20_TO_29]];
30대 : [WiseTracker setAge:[WiseTrackerAGE_30_TO_39]];
40대 : [WiseTracker setAge:[WiseTrackerAGE_40_TO_49]];
50대 : [WiseTracker setAge:[WiseTrackerAGE_50_TO_59]];
60대이상 : [WiseTracker setAge:[WiseTrackerAGE_60_OVER]];

회원속성 : [WiseTracker setUserAttribute:[WiseTrackerUSER_ATTRIBUTE_1,"custom value"];
 * USER_ATTRIBUTE는 회원의 다양한 속성(회원등급, 직업, 외국인 여부 등)을 분류할 필요가 있을때 사용합니다.

//적용예시
 [WiseTracker setGender:[WiseTrackerGENDER_MALE]]; // 성별 
 [WiseTracker setAge:[WiseTrackerAGE_20_TO_29]]; // 연령
 [WiseTracker setUserAttribute:[WiseTrackerUSER_ATTRIBUTE_1,"VIP"]]; // 회원 분류
```

#### 2) Swift
```Swift
남성 : WiseTracker.setGender(WiseTracker.GENDER_MALE())
여성 : WiseTracker.setGender(WiseTracker.GENDER_FEMALE())
기타 : WiseTracker.setGender(WiseTracker.GENDER_ETC())

10대 이하 : WiseTracker.setAge(WiseTracker.AGE_0_TO_9())
10대 : WiseTracker.setAge(WiseTracker.AGE_10_TO_19())
20대 : WiseTracker.setAge(WiseTracker.AGE_20_TO_29())
30대 : WiseTracker.setAge(WiseTracker.AGE_30_TO_39())
40대 : WiseTracker.setAge(WiseTracker.AGE_40_TO_49())
50대 : WiseTracker.setAge(WiseTracker.AGE_50_TO_59())
60대이상 : WiseTracker.setAge(WiseTracker.AGE_60_OVER())

회원속성 : WiseTracker.setUserAttribute(WiseTracker.USER_ATTRIBUTE_1,"custom value"())
 * USER_ATTRIBUTE는 회원의 다양한 속성(회원등급, 직업, 외국인 여부 등)을 분류할 필요가 있을때 사용합니다.

//적용예시
 WiseTracker.setGender(WiseTracker.GENDER_MALE()) // 성별 
 WiseTracker.setAge(WiseTracker.AGE_20_TO_29()) // 연령
 WiseTracker.setUserAttribute(WiseTracker.USER_ATTRIBUTE_1,"VIP"()) // 회원 분류
```

#### 3) WebView
```Java script
남성 : WiseTracker.setGender(WiseTracker.GENDER_MALE);
여성 : WiseTracker.setGender(WiseTracker.GENDER_FEMALE);
기타 : WiseTracker.setGender(WiseTracker.GENDER_ETC);

10대 이하 : WiseTracker.setAge(WiseTracker.AGE_0_TO_9);
10대 : WiseTracker.setAge(WiseTracker.AGE_10_TO_19);
20대 : WiseTracker.setAge(WiseTracker.AGE_20_TO_29);
30대 : WiseTracker.setAge(WiseTracker.AGE_30_TO_39);
40대 : WiseTracker.setAge(WiseTracker.AGE_40_TO_49);
50대 : WiseTracker.setAge(WiseTracker.AGE_50_TO_59);
60대이상 : WiseTracker.setAge(WiseTracker.AGE_60_OVER);

회원속성 : WiseTracker.setUserAttribute(WiseTracker.USER_ATTRIBUTE_1,"custom value");
 * USER_ATTRIBUTE는 회원의 다양한 속성(회원등급, 직업, 외국인 여부 등)을 분류할 필요가 있을때 사용합니다.

//적용예시
 <script type="wisetracker/text" id="wiseTracker">
 WiseTracker.setGender(WiseTracker.GENDER_MALE); // 성별 
 WiseTracker.setAge(WiseTracker.AGE_20_TO_29); // 연령
 WiseTracker.setUserAttribute(WiseTracker.USER_ATTRIBUTE_1,"VIP"); // 회원 분류 
 </script>
```

### 2. 화면 분석
화면별 페이지뷰를 분석하기 위해 사용자가 방문하는 주요 화면에 분석 코드를 삽입합니다.

- 적용위치 : 분석 대상으로 지정한 주요 페이지


#### 1) Objective-C
```Objective-C
로그인 입력 화면 : [WiseTracker setPageIdentity:@"LIF"];
로그인 완료 화면 : [WiseTracker setPageIdentity:@"LIR"];
회원가입 신청 화면 : [WiseTracker setPageIdentity:@"RGI"];
회원가입 입력 화면 : [WiseTracker setPageIdentity:@"RGF"];
회원가입 완료 화면 : [WiseTracker setPageIdentity:@"RGR"];
상품 리스트 화면 : [WiseTracker setPageIdentity:@"PLV"];
상품 상세 화면 : [WiseTracker setPageIdentity:@"PDV"];
장바구니 화면 : [WiseTracker setPageIdentity:@"OCV"];
주문정보 입력 화면 : [WiseTracker setPageIdentity:@"ODF"];
주문 완료 화면 : [WiseTracker setPageIdentity:@"ODR"];
 
사용자 정의 화면 : [WiseTrackersetPageIdentity:@"custom value"];
// 사전 정의된 화면 이외의 화면을 분석하고자 할때 사용자 정의 화면코드를 활용할 수 있습니다.
// "custom value"에 임의의 값을 넣어 원하는 화면에 코드를 삽입하면 되며
// "custom value"는 영문+숫자 조합의 6byte 이하의 문자열로 구성합니다.
```

#### 2) Swift
```Swift
로그인 입력 화면 : WiseTracker.setPageIdentity("LIF")
로그인 완료 화면 : WiseTracker.setPageIdentity("LIR")
회원가입 신청 화면 : WiseTracker.setPageIdentity("RGI")
회원가입 입력 화면 : WiseTracker.setPageIdentity("RGF")
회원가입 완료 화면 : WiseTracker.setPageIdentity("RGR")
상품 리스트 화면 : WiseTracker.setPageIdentity("PLV")
상품 상세 화면 : WiseTracker.setPageIdentity("PDV")
장바구니 화면 : WiseTracker.setPageIdentity("OCV")
주문정보 입력 화면 : WiseTracker.setPageIdentity("ODF")
주문 완료 화면 : WiseTracker.setPageIdentity("ODR")
 
사용자 정의 화면 : WiseTracker.setPageIdentity("custom value")
```

#### 3) WebView
```Java script
로그인 입력 화면 : WiseTracker.setPageIdentity("LIF");
로그인 완료 화면 : WiseTracker.setPageIdentity("LIR");
회원가입 신청 화면 : WiseTracker.setPageIdentity("RGI");
회원가입 입력 화면 : WiseTracker.setPageIdentity("RGF");
회원가입 완료 화면 : WiseTracker.setPageIdentity("RGR");
상품 리스트 화면 : WiseTracker.setPageIdentity("PLV");
상품 상세 화면 : WiseTracker.setPageIdentity("PDV");
장바구니 화면 : WiseTracker.setPageIdentity("OCV");
주문정보 입력 화면 : WiseTracker.setPageIdentity("ODF");
주문 완료 화면 : WiseTracker.setPageIdentity("ODR");
 
사용자 정의 화면 : WiseTracker.setPageIdentity("custom value");
```

### 3. 컨텐츠 분석
#### 1) 컨텐츠 경로 분석
앱을 구성하는 다양한 컨텐츠를 계층구조로 정리해 분석하기 위해 코드를 삽입합니다.

- 적용 위치: 컨텐츠를 계층구로조 분석할 필요가 있는 모든 화면

##### a) Objective-C
```Objective-C
[WiseTracker setContents:@"^1st depth value^2dn depth value"]; // value는 반드시 ^로 시작되어야 하며, 하위 뎁스를 구분할 경우에도 ^를 사용합니다

//적용예시
 [WiseTracker setContents:@"^메인^의류^점퍼"];
```

##### b) Swift
```Swift
WiseTracker.setContents("^1st depth value^2dn depth value") // value는 반드시 ^로 시작되어야 하며, 하위 뎁스를 구분할 경우에도 ^를 사용합니다
 
//적용예시
 WiseTracker.setContents("^메인^의류^점퍼")
 ```

##### c) WebView
```Java script
WiseTracker.setContents("^1st depth value^2dn depth value"); // value는 반드시 ^로 시작되어야 하며, 하위 뎁스를 구분할 경우에도 ^를 사용합니다

//적용예시
 <script type="wisetracker/text" id="wiseTracker">
 WiseTracker.setContents("^메인^의류^점퍼");
 </script>
```

#### 2) 상품 분석
앱을 구성하는 다양한 상품 및 상품 카테고리 정보를 분석하기 위해 코드를 삽입합니다.

- 적용 위치: 상품 상세화면

##### a) Objective-C
```Objective-C
상품 : [WiseTracker setProduct:@"상품코드" name:@"상품명"];
상품 카테고리 : [WiseTracker setProductCategory:@"상품 카테고리 코드" name:@"^상품 카테고리명"];
상품 상세화면 : [WiseTracker setPageIdentity:@"PDV"];

//적용예시
 [WiseTracker setProduct:@"PROD01" name:@"나이키"];
 [WiseTracker setProductCategory:@"CAT01" name:@"^신발"];
 [WiseTracker setPageIdentity:@"PDV"];
```

##### b) Swift
```Swift
상품 : WiseTracker.setProduct("상품코드", "상품명")
상품 카테고리 : WiseTracker.setProductCategory("상품 카테고리 코드", "^상품 카테고리명")
상품 상세화면 : WiseTracker.setPageIdentity("PDV")

//적용예시
 WiseTracker.setProduct("PROD01", "나이키")
 WiseTracker.setProductCategory("CAT01", "^신발")
 WiseTracker.setPageIdentity("PDV")
```

##### c) WebView
```Java script
상품 : WiseTracker.setProduct("상품코드", "상품명");
상품 카테고리 : WiseTracker.setProductCategory("상품 카테고리 코드", "^상품 카테고리명");
상품 상세화면 : WiseTracker.setPageIdentity("PDV");

//적용예시
 <script type="wisetracker/text" id="wiseTracker">
 WiseTracker.setProduct("PROD01", "나이키");
 WiseTracker.setProductCategory("CAT01", "^신발");
 WiseTracker.setPageIdentity("PDV");
 </script>
```

#### 3) 검색 키워드 분석
##### a) Objective-C
```Objective-C
[WiseTracker setSearchKeyword:@"검색어"];
[WiseTracker setSearchKeywordResult:@검색결과 수];

//적용예시
 [WiseTracker setSearchKeyword:@"가디건"];
 [WiseTracker setSearchKeywordResult:@1089];
```

##### b) Swift
```Swift
WiseTracker.setSearchKeyword("검색어")
WiseTracker.setSearchKeywordResult(검색결과 수)

//적용예시
 WiseTracker.setSearchKeyword("가디건")
 WiseTracker.setSearchKeywordResult(1089)
```

##### c) WebView
```Java script
WiseTracker.setSearchKeyword("검색어");
WiseTracker.setSearchKeywordResult(검색결과 수);
 
//적용예시
 <script type="wisetracker/text id="wiseTracker">
 WiseTracker.setSearchKeyword("가디건");
 WiseTracker.setSearchKeywordResult(1089);
 </script>
```

### 4. 커머스 분석
각 상품별 주문수와 매출액을 분석할 수 있도록 코드를 삽입합니다. 필수연동 API에서 몇가지 함수가 추가 되었습니다.

- 적용 위치: 주문 완료화면

#### 1) Objective-C
```Objective-C
상품 : [WiseTracker setOrderProductArray:@[@"상품코드1", @"상품코드2"]];
상품 카테고리 : [WiseTracker setOrderProductCategoryArray:@[@"상품 카테고리 코드1", @"상품 카테고리 코드2"]];
상품 구매금액 : [WiseTracker setOrderAmountArray:@[@A상품 구매 금액, @B상품 구매 금액]];
상품 주문수량 : [WiseTracker setOrderQuantityArray:@[@A상품 주문수량, @B상품 주문수량]];
주문이 발생한 페이지 : [WiseTracker setPageIdentity:@"ODR"];
 
//적용예시
 [WiseTracker setOrderProductArray:@[@"PROD01",@"PROD02"]]; // 상품정보
 [WiseTracker setOrderProductCategoryArray:@[@"CAT01",@"CAT02"]]; // 상품카테고리
 [WiseTracker setOrderAmountArray:@[@10000, @20000]]; // 주문 상품 총액 (합계)
 [WiseTracker setOrderQuantityArray:@[@1, @2]]; // 주문
```

#### 2) Swift
```Swift
상품 : WiseTracker.setOrderProductArray(["상품코드1", "상품코드2"])
상품 카테고리 : WiseTracker.setOrderProductCategoryArray(["상품 카테고리 코드1", "상품 카테고리 코드2"])
상품 구매금액 : WiseTracker.setOrderAmountArray([A상품 구매 금액, B상품 구매 금액])
상품 주문수량 : WiseTracker.setOrderQuantityArray([A상품 주문수량, B상품 주문수량])
주문이 발생한 페이지 : WiseTracker.setPageIdentity("ODR")
 
//적용예시
 WiseTracker.setOrderProductArray(["PROD01","PROD02"]) // 상품정보
 WiseTracker.setOrderProductCategoryArray(["CAT01","CAT02"]) // 상품카테고리
 WiseTracker.setOrderAmountArray([10000, 20000]) // 주문 상품 총액 (합계)
 WiseTracker.setOrderQuantityArray ([1, 2]) // 주문
 WiseTracker.setPageIdentity("ODR") // 주문완료
```

#### 3) WebView
```Java script
상품 : WiseTracker.setOrderProductArray({"상품코드1", "상품코드2"});
상품 카테고리 : WiseTracker.setOrderProductCategoryArray({"상품 카테고리 코드1", "상품 카테고리 코드2"});
상품 구매금액 : WiseTracker.setOrderAmountArray({A상품 구매 금액, B상품 구매 금액});
상품 주문수량 : WiseTracker.setOrderQuantityArray({A상품 주문수량, B상품 주문수량});
주문이 발생한 페이지 : WiseTracker.setPageIdentity("ODR");
 
//적용예시
 <script type="wisetracker/text" id="wiseTracker">
 WiseTracker.setOrderProductArray({"PROD01","PROD02"}); // 상품정보
 WiseTracker.setOrderProductCategoryArray({"CAT01","CAT02"}); // 상품카테고리
 WiseTracker.setOrderAmountArray({10000, 20000}); // 주문 상품 총액 (합계)
 WiseTracker.setOrderQuantityArray ({1, 2}); // 주문
 WiseTracker.setPageIdentity("ODR"); // 주문완료
 </script>
```

### 5. Custom Goals 분석
각 고객사마다 비즈니스 환경과 분석 대상이 다릅니다. 상품구매 외에 가입, 상담 문의 등도 전환으로 지정해 성과 값을 수집할 필요가 있습니다. 이런 Custom 전환성과를 분석하기 위해 코드를 삽입합니다.

- 적용 위치 : 전환 완료 화면

#### 1) Objective-C
```Objective-C
[WiseTrackersetGoal:[WiseTrackerGOAL_1]  value: 1];

// WiseTracker.GOAL_1~10까지 사용 가능하며, 전환 완료 화면이 존재하지 않는 경우 버튼에 적용해 측정할 수도 있습니다.
// ex) 장바구니 담기 버튼, SNS 공유 버튼 등
```

#### 2) Swift
```Swift
WiseTracker.setGoal(WiseTracker.GOAL_1(), value: 1)
```

#### 3) WebView
```Java script
WiseTracker.setGoal(WiseTracker.GOAL_1, 1);
```

*Click Event 분석을 위한 sendTransaction
sendTransaction 함수가 호출되면, 분석한 데이터를 SDK가 즉시 서버로 전송합니다.
따라서 Button에 대한 Click Event와 같이 화면의 전환 없이 발생하는 Event를 측정하기 위해 사용합니다. 

- 적용위치 : 화면 전환이 없는 Event 중 측정이 필요한 것 (배너 클릭, SNS 공유, 위시 리스트 등록 등)

#### 1) Objective-C
```Objective-C
-(IBAction) commonBtnEvt:(id)sender{
	[WiseTracker putGoalData:[WiseTracker GOAL_1] value:@1];
	[WiseTracker sendTransaction];
}
```

#### 2) Swift
```Swift
@IBAction func commonBtnEvt(sender:AnyObject){
	WiseTracker.putGoalData(WiseTracker.GOAL_1(), 1)
	WiseTracker.sendTransaction()
}
```

#### 3) WebView
```Java script
public void CommonBtnEvt(View v){
	WiseTracker.setGoal(WiseTracker.GOAL_1,1);
	WiseTracker.sendTransaction();
}
```
### 6. 푸시메세지 분석
푸시 메시지로 앱을 실행하여 앱 내에서 발생시킨 사용자 행동까지 분석할 수 있습니다. 푸시 메시지로 앱을 깨우는 이벤트에 아래 코드를 삽입합니다.

#### 1) Objective-C
```Objective-C
[WiseTracker setPushMessageData:@"푸시 메시지 번호" name:@"푸시 메시지 타이틀"];

// 푸시 메시지 번호: 유니크한 메시지 시퀀스 값
// 푸시 메시지 타이틀: 전송한 푸시 메시지의 타이틀 정보
```

#### 2) Swift
```Swift
WiseTracker.setPushMessageData("푸시 메시지 번호", "푸시 메시지 타이틀")

// 푸시 메시지 번호: 유니크한 메시지 시퀀스 값
// 푸시 메시지 타이틀: 전송한 푸시 메시지의 타이틀 정보
```

## <a id="WISETRACKER_FACEBOOK"></a>Facebook 광고성과 분석을 위한 설정


Facebook 광고를 통한 앱 설치와 인앱 전환 성과를 분석하기 위해서는 별도의 설정이 필요합니다. **앱에 Facebook SDK가 설치되어 있는 경우**에만 본 문서의 내용을 적용하며, 조건에 해당하지 않는 경우에는 적용하지 않아야 합니다.

앱에 Facebook SDK가 설치되어 있다면, Wisetracker의 init 메서드 바로 아래에 다음 설정을 추가합니다.

### Objective-C
```Objective-C
if (launchOptions[UIApplicationLaunchOptionsURLKey] == nil) {
    [FBSDKAppLinkUtility fetchDeferredAppLink:^(NSURL *url, NSError *error) {
        if (error) {
            NSLog(@"Received error while fetching deferred app link %@", error);
        }
        if (url) {
            [WiseTracker setFacebookReferrerData:url];
        }
    }];
}
```

### Swift
```Swift
FBSDKAppLinkUtility.fetchDeferredAppLink({ url, error in
    if error != nil {
        if let anError = error {
            print("Received error while fetching deferred app link \(anError)")
        }
    }
    if let unwrappedUrl = url {
        WiseTracker.setFacebookReferrerData(unwrappedUrl)
    }
})
```

위 설정이 적용 되었다면 Facebook 광고를 통한 앱 설치가 정상 분석 됩니다. 위 설정이 올바르게 적용 되었는지를 확인하기 위해서는, Facebook이 제공하는 ‘App Ads Helper’로 딥 링크 작동 여부를 테스트해야 합니다. 아래 경로를 방문하여 테스트를 시작할 수 있습니다.

[https://developers.facebook.com](https://developers.facebook.com) -> Tools & Support > App Ads Helper

![](http://www.wisetracker.co.kr/wp-content/uploads/2018/01/fb113.png)


### 1. 테스트할 앱을 선택한 후 페이지 하단 Developer Tool의 Test Deep Link를 클릭합니다.

![](http://www.wisetracker.co.kr/wp-content/uploads/2018/01/fb115.jpg)

### 2. 테스트 디바이스에 앱이 설치되어 있다면 삭제합니다.
### 3. 열어 놓은 Facebook 테스트 페이지로 돌아갑니다. 앱 설치 광고 등록 시 사용한 딥 링크를 Send Deep Link 영역에 입력 후 Send to iOS 버튼을 클릭합니다. 이 때 Send Deferred는 반드시 체크되어 있어야 합니다.

![](http://www.wisetracker.co.kr/wp-content/uploads/2018/01/fb116.jpg)

#### 4. Send to iOS 버튼 클릭 시, 로그인 된 페이스북 계정에 테스트를 위한 앱 설치 광고 링크가 발급됩니다. 해당 링크를 클릭하여 앱을 설치합니다.


![](http://www.wisetracker.co.kr/wp-content/uploads/2018/01/fb117.png)

#### 5.  설치된 앱을 실행(Xcode 빌드로 실행)하고 로그를 확인 합니다. 아래와 같이 로그 내용에 딥 링크가 정상 출력 된다면 페이스북 앱 설치 광고에 대한 분석이 가능합니다.

![](http://www.wisetracker.co.kr/wp-content/uploads/2018/01/fb119.png)

#### 6. 앱 참여 광고를 진행하는 경우 이미 앱을 설치한 사용자가 광고를 클릭하여 앱을 실행하는 시점에 페이스북 광고에 등록한 딥 링크값이 동작하는지 여부를 확인하면 됩니다. 테스트 대상 앱이 설치 되어있는 테스트 디바이스를 준비합니다.

#### 7. 앱 참여 광고 등록 시 사용한 딥 링크를 Send Deep Link 영역에 입력 후 Send to iOS 버튼을 클릭합니다. 이 때 Send Deferred는 반드시 체크 해제되어 있어야 합니다.

![](http://www.wisetracker.co.kr/wp-content/uploads/2018/01/fb120.png)

#### 8. Send to iOS 버튼 클릭 시, 로그인 된 페이스북 계정에 테스트를 위한 앱 참여 광고 링크가 발급됩니다. 해당 링크를 클릭하여 앱을 실행합니다.

#### 9. 설치된 앱을 실행(Xcode 빌드로 실행)하고 로그를 확인 합니다. 아래와 같이 로그 내용에 딥 링크가 정상 출력 된다면 페이스북 앱 참여 광고에 대한 분석이 가능합니다.

![](http://www.wisetracker.co.kr/wp-content/uploads/2018/01/fb122.png)


## <a id="WISETRACKER_WAFI"></a> WAFI 설정

WAFI(Wisetracker Apple Feedback Interface Module)는 iOS 플랫폼에서 앱의 삭제 여부를 분석하기 위해 개발한 모듈입니다. 이 모듈은 앱이 설치된 단말기에 앱 삭제 여부의 확인을 요청하게 되며, Wisetracker SDK가 탑재된 고객사의 앱은 자신의 상태를 Wisetracker의 서버로 전송합니다.

WAFI 모듈 설치는 총 4단계의 과정으로 진행합니다.

##### 1. WAFI 모듈 설치
##### 2. WAFI 설정파일 세팅
##### 3. APNS(Apple Push Notification Service) 사용을 위한 인증서 정보 설정
##### 4. 모듈 실행

### 1. WAFI 모듈 설치
전달 받은 압축파일을 모듈을 설치하고자 하는 경로에 압축 해제하면 기본적인 설치가 완료됩니다. 압축파일은 아래와 같은 폴더를 포함하고 있습니다.

- cert : 모듈이 APNS와 통신 하기 위해 사용할 인증서 파일을 저장하는 폴더입니다.
- config : 모듈의 property 파일이 위치하는 폴더입니다.
- data & log : 모듈이 동작하면서, 생성되는 로그와 데이터 파일이 기록됩니다.
- wafi_lib : 모듈이 참조하는 라이브러리 파일이 있는 폴더입니다.
- wafi.jar : 모듈 본체이며, executable jar 파일입니다.

![](https://dzf8vqv24eqhg.cloudfront.net/userfiles/6274/8379/ckfinder/images/007.png?dc=201702100726-47)

### 2. WAFI 설정파일 세팅
WAFI 모듈이 설치된 폴더($WAFI_HOME) 하위에 config 폴더가 있으며, config 폴더 안에는 모듈이 동작하기 위한 설정파일이 존재합니다. 압축파일에 기본적으로 포함되어 있는 설정파일은 샘플 파일로, 실제로 동작하는 설정파일은 Wisetracker에 접속하여 다운로드 한 뒤 사용해야 합니다.

- 다운로드 경로 : 환경설정 – 기본설정 – 서비스 – WAFI
![](https://dzf8vqv24eqhg.cloudfront.net/userfiles/6274/8379/ckfinder/images/008.png?dc=201702100727-21)

WAFI 아이콘을 클릭하면 아래와 같은 화면이 나타납니다. 해당 내용을 복사하여 $WAFI_HOME/config/common.properties 파일로 저장합니다.
![](https://dzf8vqv24eqhg.cloudfront.net/userfiles/6274/8379/ckfinder/images/009.png?dc=201702100727-78)

### 3. WAFI 인증서 정보 설정
WAFI 모듈은 APNS와 통신을 하기 위해 Apple이 발급한 인증서 파일이 필요합니다. 인증서 파일은 [https://developer.apple.com](https://developer.apple.com)에서 받으실 수 있습니다.

인증서 확보 후에는, $WAFI_HOME/config/common.properties 파일에 기록된 인증서 정보를 현재 서버에 맞도록 수정해야 합니다. Common.properties 파일에서 아래의 부분을 확인하고 수정합니다.

- 인증서 파일 경로 설정
- 인증서 암호 설정
- 인증서 타입 설정 (SANDBOX, PRODUCTION)

![](https://dzf8vqv24eqhg.cloudfront.net/userfiles/6274/8379/ckfinder/images/010.png?dc=201702100728-30)

### 4. 모듈 실행
WAFI는 Java Application 이기 때문에 JAVA가 설치되어야 있어야 합니다. 모듈 실행 전 JAVA 설치 유무 확인이 필요하며 버전은 1.7 이상 사용이 권장됩니다.

JAVA가 설치되어 있다면 WAFI 모듈이 설치된 폴더에 가서 아래의 명령을 command 창에 실행하면 모듈이 실행 됩니다. 실행 이후 로그 확인은 $WAFI_HOME/logs/wafi.log 파일을 확인하시면 됩니다.

```
[root@localhostwafi_schedule]# ./wafi.sh start
```

![](https://dzf8vqv24eqhg.cloudfront.net/userfiles/6274/8379/ckfinder/images/011.png?dc=201702100729-9)

정상적으로 실행 되면 위와 같은 START 로그 확인이 가능합니다. START 로그 이후 정해진 시간에 따라 본 예약작업을 실행하는데, 이 시점에는 아래와 같은 로그를 기록하면서 동작합니다. 아래는 테스트 서버에서 실행한 WAFI 로그의 기록 내용 예시입니다. 아래와 같은 로그가 기록 되면서 1일 1회 실행이 되는지 확인합니다.

![](https://dzf8vqv24eqhg.cloudfront.net/userfiles/6274/8379/ckfinder/images/012.png?dc=201702100729-127)