#
# Be sure to run `pod lib lint GSHOpenSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'GSHOpenSDK'
  s.version          = '0.2.14'
  s.summary          = 'GSHOpenSDK'


  s.description      = <<-DESC
TODO: GSHOpenSDK
                       DESC

  s.homepage         = 'https://github.com/zuomingTang/GSHOpenSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zuomingTang' => '414933949@qq.com' }
  s.source           = { :git => 'https://github.com/zuomingTang/GSHOpenSDK.git', :tag => '0.2.14' }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'
  s.vendored_frameworks = 'GSHOpenSDK/Classes/GSHOpenSDKSoundCode.framework'
  s.resource_bundles = {
      'GSHOpenSDK' => ['GSHOpenSDK/Assets/*']
  }
  s.requires_arc = false
  
end
