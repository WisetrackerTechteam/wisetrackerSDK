[![Version](https://img.shields.io/cocoapods/v/WiseTracker.svg?style=flat)](https://cocoapods.org/pods/WiseTracker)
[![License](https://img.shields.io/cocoapods/l/WiseTracker.svg?style=flat)](https://cocoapods.org/pods/WiseTracker)
[![Platform](https://img.shields.io/cocoapods/p/WiseTracker.svg?style=flat)](https://cocoapods.org/pods/WiseTracker)

# Index
* [WiseTracker](./README.md#DOT)
	1. [SDK 설치 및 초기화](#WISETRACKER_INSTALL)
	2. [유입경로 분석](#WISETRACKER_DEEPLINK)
  	3. [기본 분석 API](#WISETRACKER_BASE)
  	4. [WebView 설정](#WISETRACKER_WEBVIEW)
	
# WiseTracker

## <a id="WISETRACKER_INSTALL"></a> 1. SDK 설치 및 초기화

#### 1.1 XCode 프로젝트 파일중 Podfile 파일에 다음과 같이 SDK를 추가합니다.

```
pod 'WiseTracker'
```

기존에 SDK를 한번 설치한 경우에는 설치할SDK 버전을 표시해야 하는 경우도 있습니다. 아래와 같이 설치할 SDK버전을 명시적으로 표시하면 됩니다.

```
pod 'WiseTracker', '~> 21.3.23'
```

Podfile 에 해당라인을 추가한 후 Terminal 프로그램을 실행하여 다음의 명령을 수행합니다.
```
cmd> pod install
```

SDK 버전업데이트의 경우 다음의 명령을 수행합니다.
```
cmd> pod install --repo-update
```

정상적으로 설치가 되면 아래와 같은 폴더 구조를 확인할 수 있습니다.

<img src="http://www.wisetracker.co.kr/wp-content/uploads/2019/12/podOk-1.png" width="247" height="356" />


#### 1.2 아래와 같이 설정을 적용합니다.
##### 1) Project – Target – BuildPhase – Link Binary With Libraries의 “+” 버튼을 클릭해 다음 4가지 라이브러리를 추가합니다.
 - CoreTelephony.framework
 - Systemconfigureation.framework
 - JavascriptCore.framework
 - WebKit.framework

![](https://dzf8vqv24eqhg.cloudfront.net/userfiles/6274/8379/ckfinder/images/004(1).png?dc=201702100616-71)

##### 2) libz.dylib framework 사용과 관련하여 NSData 확장 타입을 활용하기 위해 Build Settings – Linking – Other Linker Flags에 아래의 값을 추가합니다.

![](https://dzf8vqv24eqhg.cloudfront.net/userfiles/6274/8379/ckfinder/images/005.jpg?dc=201702100618-18)

##### 3) http 통신 허용 설정
- http통신을 허용하기 위해 info.plist파일에 NSAppTransportSecurity를 아래와 같이 추가합니다

```xml
	<key>NSAppTransportSecurity</key>
	<dict>
		<key>NSAllowsArbitraryLoads</key>
		<true/>
	</dict>
```

#### 1.3 아래의 방법을 따라 AppKey를 복사한 뒤 적용합니다.

#### 1) [http://report.wisetracker.co.kr](http://report.wisetracker.co.kr)에 로그인 합니다.

#### 2) 설정 – 기본설정 – 서비스 – iOS 분석코드(AppKey) 클릭 – 언어에 맞는 AppKey를 복사 후 적용합니다.

![](https://dzf8vqv24eqhg.cloudfront.net/userfiles/6274/8379/ckfinder/images/006.png?dc=201702100619-66)

#### 3) 복사한 AppKey를 SDK 적용 대상 프로젝트의 AppDelegate의 didFinishLaunchingWithOptions 함수에 아래와 같이 적용합니다.

- Objective-C : #import<WiseTracker/WiseTracker.h>
 
```Objective-C
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

	[WiseTracker applicationKey:@"앱의 APPKEY 삽입"];
	[WiseTracker setApplication:application];
	[WiseTracker initEnd:launchOptions];
	return YES;
}
```

- Swift : import WiseTracker

```Swift
func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {

	WiseTracker.applicationKey("앱의 APPKEY 삽입")
	WiseTracker.setApplication(application)
	WiseTracker.initEnd(launchOptions)
	return true
}
```

## <a id="WISETRACKER_DEEPLINK"></a> 2.유입경로 분석 적용
### 2.1 DeepLink 분석 적용
#### - 딥링크가 설정된 url 을 통해서 오픈된 이벤트를 분석합니다. 분석을 하기 위해서는 앱에 custom url scheme 이 설정되어 있어야 합니다.
![](http://www.wisetracker.co.kr/wp-content/uploads/2019/12/deepLinkScheme-1024x377.png)

#### - 딥링크 분석을 위해 아래와 같이 적용해줍니다. 

- Objective-C

##### iOS 4.2–9.0
```Objective-C
-(BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation{
	[WiseTracker urlRefererCheck:sourceApplication url:url];
	return YES;
}
```

OR

##### iOS 9.0+

```Objective-C
- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options {
    [WiseTracker urlRefererCheck:@"" url:url];
    return YES;

}
```

- Swift

##### iOS 4.2–9.0

```Swift
func application(_ application: UIApplication, open url: URL, sourceApplication: String?, annotation: Any) -> Bool {
	WiseTracker.urlRefererCheck(sourceApplication,url: url)
	return true
}
```

OR

##### iOS 9.0+

```Swift
 func application(_ app: UIApplication, open url: URL, options: [UIApplication.OpenURLOptionsKey : Any] = [:]) -> Bool {
	WiseTracker.urlRefererCheck("",url: url)
	return true
}
```
### 2.2 Univarsal Link 분석 적용
#### 2.2.1 Univarsal Link 사용을 위해 Associated Domains에 WiseTracker 서비스 도메인 등록(아래 이미지 참조)
  - applinks:cdn.wisetracker.co.kr
  - applinks:ads.wisetracker.co.kr


![](http://www.wisetracker.co.kr/wp-content/uploads/2019/12/associatedDomains-1024x583.png)

#### 2.2.2 위 두 도메인의 서버에 apple-app-site-association에 적용할 앱의 번들 ID와 팀 ID를 당사에 전달
![](http://www.wisetracker.co.kr/wp-content/uploads/2019/12/team-ID-%E1%84%92%E1%85%AA%E1%86%A8%E1%84%8B%E1%85%B5%E1%86%AB-1024x605.png)

#### 2.2.3 앱에 아래 함수 적용
  :  continueUserActivity 부분에 아래와 같이 적용이 되어야 유니버셜링크를 통한 광고분석이 가능합니다.

- Objective-C

```Objective-C
- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity* )userActivity restorationHandler:(void (^)(NSArray * _Nullable))restorationHandler{
    [WiseTracker setApplication:application];
    NSString* encode = [[url absoluteString] stringByReplacingOccurrencesOfString:@"%" withString:@"%%"];
    NSString* appLink = [WiseTracker universalLinkCheck:encode];    
    ...
    return YES;
}
```

- Swift

```Swift
func application(_ application: UIApplication, continue userActivity: NSUserActivity, restorationHandler: @escaping ([Any]?) -> Void) -> Bool {
       if let uniLink = userActivity.webpageURL?.absoluteString {
           WiseTracker.setApplication(application)
           let appLink = WiseTracker.universalLinkCheck(uniLink)
           ...
       }
       return false;
}
```

### 2.3 Facebook 광고성과 분석을 위한 설정

Facebook 광고를 통한 앱 설치와 인앱 전환 성과를 분석하기 위해서는 별도의 설정이 필요합니다.
Facebook 광고 성과 분석 SDK가 적용되지 않는 사용자는 아래의 링크에서 설치를 진행하여 주시기 바랍니다.
[페이스북 SDK 설치](https://developers.facebook.com/docs/app-ads/deep-linking/?locale=ko_KR#os)

**앱에 Facebook SDK가 설치되어 있는 경우**에만 본 문서의 내용을 적용하며, 조건에 해당하지 않는 경우에는 적용하지 않아야 합니다.

앱에 Facebook SDK가 설치되어 있다면, Wisetracker의 init 메서드 바로 아래에 다음 설정을 추가합니다.

#### Objective-C
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

#### Swift
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


#### 2.3.1 테스트할 앱을 선택한 후 페이지 하단 Developer Tool의 Test Deep Link를 클릭합니다.

![](http://www.wisetracker.co.kr/wp-content/uploads/2018/01/fb115.jpg)

#### 2.3.2 테스트 디바이스에 앱이 설치되어 있다면 삭제합니다.
#### 2.3.3 열어 놓은 Facebook 테스트 페이지로 돌아갑니다. 앱 설치 광고 등록 시 사용한 딥 링크를 Send Deep Link 영역에 입력 후 Send to iOS 버튼을 클릭합니다. 이 때 Send Deferred는 반드시 체크되어 있어야 합니다.

![](http://www.wisetracker.co.kr/wp-content/uploads/2018/01/fb116.jpg)

#### 2.3.4 Send to iOS 버튼 클릭 시, 로그인 된 페이스북 계정에 테스트를 위한 앱 설치 광고 링크가 발급됩니다. 해당 링크를 클릭하여 앱을 설치합니다.


![](http://www.wisetracker.co.kr/wp-content/uploads/2018/01/fb117.png)

#### 2.3.5 설치된 앱을 실행(Xcode 빌드로 실행)하고 로그를 확인 합니다. 아래와 같이 로그 내용에 딥 링크가 정상 출력 된다면 페이스북 앱 설치 광고에 대한 분석이 가능합니다.

![](http://www.wisetracker.co.kr/wp-content/uploads/2018/01/fb119.png)

#### 2.3.6 앱 참여 광고를 진행하는 경우 이미 앱을 설치한 사용자가 광고를 클릭하여 앱을 실행하는 시점에 페이스북 광고에 등록한 딥 링크값이 동작하는지 여부를 확인하면 됩니다. 테스트 대상 앱이 설치 되어있는 테스트 디바이스를 준비합니다.

#### 2.3.7 앱 참여 광고 등록 시 사용한 딥 링크를 Send Deep Link 영역에 입력 후 Send to iOS 버튼을 클릭합니다. 이 때 Send Deferred는 반드시 체크 해제되어 있어야 합니다.

![](http://www.wisetracker.co.kr/wp-content/uploads/2018/01/fb120.png)

#### 2.3.8 Send to iOS 버튼 클릭 시, 로그인 된 페이스북 계정에 테스트를 위한 앱 참여 광고 링크가 발급됩니다. 해당 링크를 클릭하여 앱을 실행합니다.

#### 2.3.9 설치된 앱을 실행(Xcode 빌드로 실행)하고 로그를 확인 합니다. 아래와 같이 로그 내용에 딥 링크가 정상 출력 된다면 페이스북 앱 참여 광고에 대한 분석이 가능합니다.

![](http://www.wisetracker.co.kr/wp-content/uploads/2018/01/fb122.png)
## <a id="WISETRACKER_BASE"></a> 2. 기본 분석 API
필수연동 API는 Wisetracker의 기본기능을 활용하기 위해 반드시 적용해야 하는 코드들로 이루어져 있습니다. 필수연동 API의 코드들을 모두 적용할 것을 권장합니다.

### 2.1 StartPage(Object obj)
화면 분석을 위한 코드로 화면에 진입할때, 즉 모든 `viewControlller`의 `viewWillAppear`에 아래와 같이 적용 합니다.

* startPage가 호출된 화면에서는, 화면이 사라질 때 endPage가 호출되어야 합니다.

- Objective-C

```Objective-C
-(void)viewWillAppear:(BOOL)animated{
	[WiseTracker startPage:self];
}
```

- Swift

```Swift
override func viewWillAppear(animated: Bool) {
	WiseTracker.startPage(self)
}
```

### 2.2 endPage(Object obj)

화면이 사라질 때 사용합니다. 화면 분석을 위해서 모든 `viewControlller`의 `viewWillDisappear`에 아래와 같이 적용 합니다.


- Objective-C

```Objective-C
- (void)viewWillDisappear:(BOOL)animated{
	[WiseTracker endPage:self];
}
```

- Swift

```Swift
override func viewWillDisappear(animated: Bool) {
	WiseTracker.endPage(self)
}
```


## <a id="WISETRACKER_WEBVIEW"></a> 4. WebView 설정

웹뷰에 몇가지 설정을 추가하여 하이브리드 앱도 분석할 수 있습니다. 와이즈트래커는 UIWebView와 WKWebView를 지원하고 있으며, 분석을 위한 설정이 각각 다릅니다.

### 4.1 UIWebView

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

### 4.2 WKWebView

#### WKUserContentController 클래스에 WiseTracker 이벤트 핸들러를 추가합니다.

- Objective-C

```Objective-C
    // WKWebViewConfiguration 인스턴스 생성
    WKWebViewConfiguration *webConfig = [[WKWebViewConfiguration alloc]init];
    
    // 사용자 스크립트 삽입을 위한 WKUserContentController 인스턴스
    WKUserContentController* userController = [[WKUserContentController alloc]init];
    
    // WiseTrackerHandler 추가
    [WiseTracker addWiseTrackerHandler:userController];
    
    // WKUserContentController로 WKWebViewConfiguration 인스턴스 설정
    webConfig.userContentController = userController;
    
    self.wkWebView = [[WKWebView alloc] initWithFrame:웹킷뷰가 들어가는 프레임 configuration:webConfig]; 
```
- Swift

```Swift
    // WKWebViewConfiguration 인스턴스 생성
    let webConfig = WKWebViewConfiguration()

     // 사용자 스크립트 삽입을 위한 WKUserContentController 인스턴스            
    let userController = WKUserContentController()

     // WiseTrackerHandler 추가
     WiseTracker.addWiseTrackerHandler(userController)

     // WKUserContentController로 WKWebViewConfiguration 인스턴스 설정
     webConfig.userContentController = userController // User Content Controller 추가
    
    wkWebview = WKWebView(frame: 웹킷뷰가 들어가는 프레임 , configuration: webConfig)
    
```

#### 고객사가 구현한 ViewController의 didFinishNavigation에 inject 함수를 추가합니다.

- Objective-C

```Objective-C
- (void)webView:(WKWebView *)webView didFinishNavigation:(WKNavigation *)navigation { 
	// webView 삽입
	[WiseTracker injectWKTracker:webView];
}
```

- Swift

```Swift
   func webView(_ webView: WKWebView, didFinish navigation: WKNavigation!) {
        NSLog("DEBUG_WISETRACKER didFinish navigation.")
        WiseTracker.injectWKTracker(webView)
```

### 4.3 WebPage 분석 코드 적용
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



