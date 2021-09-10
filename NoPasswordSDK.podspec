#
#  Be sure to run `pod spec lint NoPasswordSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "NoPasswordSDK"
  spec.version      = "1.0.3"
  spec.summary      = "zhongzhaijinke"
  spec.description  = <<-DESC 
  		中债金科安全组件SDK
                   DESC

  spec.homepage     = "https://github.com/linbaowei-zy/NoPasswordSDK"
  spec.license      = { :type => "MIT", :file => "LICENSE" }

  spec.author             = { "baoweilin.baowei" => "baoweilin.baowei@alibaba-inc.com" }

  spec.platform     = :ios
  spec.platform     = :ios, "9.0"

  spec.source       = { :git => "https://github.com/linbaowei-zy/NoPasswordSDK.git", :tag => "#{spec.version}" }

  spec.ios.vendored_frameworks = 'NoPasswordSDK.framework'#SDK相对本文件路径
  spec.frameworks = "UIKit", "Foundation"
 
  # spec.library   = "iconv"
  # spec.libraries = "iconv", "xml2"

  spec.requires_arc = true
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64 armv7s',"OTHER_LDFLAGS" => "-ObjC"}#支持架构配置
  # spec.dependency "JSONKit", "~> 1.4"

end
