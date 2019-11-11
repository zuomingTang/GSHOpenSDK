#
# Be sure to run `pod lib lint GSHOpenSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'GSHOpenSDK'
  s.version          = '0.2.68'
  s.summary          = 'GSHOpenSDK'
  
  s.subspec 'GSHOpenSDKSoundCode' do |ssc|
      ssc.vendored_frameworks = 'GSHOpenSDK/Classes/GSHOpenSDKSoundCode/GSHOpenSDKSoundCode.framework'
      ssc.resource_bundles = {
          'GSHOpenSDKSoundCode' => ['GSHOpenSDK/Assets/GSHOpenSDKSoundCode/*']
      }
      #ssc.dependency 'YYModel', '1.0.4'
      ssc.dependency 'FMDB', '2.6.2'
      ssc.dependency 'FMDBHelpers', '0.0.7'
      ssc.dependency 'EZOpenSDK', '4.8.6'
      ssc.dependency 'OpenSSL-Universal', '1.0.2.13'
      ssc.dependency 'Protobuf', '3.6.0'
      ssc.requires_arc = false
  end


  s.description      = <<-DESC
TODO: GSHOpenSDK
                       DESC

  s.homepage         = 'https://github.com/zuomingTang/GSHOpenSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zuomingTang' => '414933949@qq.com' }
  s.source           = { :git => 'https://github.com/zuomingTang/GSHOpenSDK.git', :tag => '0.2.68' }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'
  
  s.source_files = 'GSHOpenSDK/Classes/*'
  s.ios.deployment_target = '9.0'
  s.requires_arc = false
end
