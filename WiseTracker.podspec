Pod::Spec.new do |s|

  s.name         = "WiseTracker"
  s.version      = "21.3.33"
  s.summary      = "SDK of WiseTracker."
  s.description  = <<-DESC
                   This is Wisetracker's SDK which tracks app and mobile attribution.
                   DESC

  s.homepage     = "http://www.wisetracker.co.kr"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Wisetracker" => "tech@wisetracker.co.kr" }
  s.ios.deployment_target = "9.3"
  s.author             = { "Wisetracker" => "tech@wisetracker.co.kr" }


  s.source = { :git => "https://github.com/WisetrackerTechteam/wisetrackerSDK.git", :tag => "#{s.version}" }
  s.ios.vendored_frameworks = 'WiseTracker.framework'
  s.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.resources = ["WKInterface.js"]
end
