Pod::Spec.new do |s|

  s.name         = "WiseTracker"
  s.version      = "21.3.24"
  s.summary      = "SDK of WiseTracker."
  s.description  = <<-DESC
                   This is Wisetracker's SDK which tracks app and mobile attribution.
                   DESC

  s.homepage     = "http://www.wisetracker.co.kr"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Wisetracker" => "tech@wisetracker.co.kr" }
  s.ios.deployment_target = "8.0"
  s.author             = { "Wisetracker" => "tech@wisetracker.co.kr" }


  s.source = { :git => "https://github.com/WisetrackerTechteam/wisetrackerSDK.git", :tag => "#{s.version}" }
  s.ios.vendored_frameworks = 'WiseTracker.framework'

  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  CocoaPods is smart about how it includes source code. For source files
  #  giving a folder will include any swift, h, m, mm, c & cpp files.
  #  For header files it will include any header in the folder.
  #  Not including the public_header_files will make all headers public.
  #

  # s.source_files  = "Classes", "Classes/**/*.{h,m}"
  # s.exclude_files = "Classes/Exclude"

  # s.public_header_files = "Classes/**/*.h"


  # ――― Resources ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  A list of resources included with the Pod. These are copied into the
  #  target bundle with a build phase script. Anything else will be cleaned.
  #  You can preserve files from being cleaned, please don't preserve
  #  non-essential files like tests, examples and documentation.
  #

  s.resources = ["iosGetFkey.html","WKInterface.js"]
  # s.resources = "Resources/*.png"

  # s.preserve_paths = "FilesToSave", "MoreFilesToSave"


  # ――― Project Linking ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Link your library with frameworks, or libraries. Libraries do not include
  #  the lib prefix of their name.
  #

  # s.framework  = "SomeFramework"
  # s.frameworks = "SomeFramework", "AnotherFramework"

  # s.library   = "iconv"
  # s.libraries = "iconv", "xml2"


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If your library depends on compiler flags you can set them in the xcconfig hash
  #  where they will only apply to your library. If you depend on other Podspecs
  #  you can include multiple dependencies to ensure it works.

  # s.requires_arc = true

  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
    s.xcconfig = {'OTHER_LDFLAGS' => '-ObjC -lz'}
  # s.dependency "JSONKit", "~> 1.4"

end
