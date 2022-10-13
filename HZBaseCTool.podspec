Pod::Spec.new do |s|
  s.name         = "HZBaseCTool"
  s.version      = "0.0.1"
  s.summary      = "A short description of HZBaseCTool."
  s.description  = 'LMBaseTool'
  s.homepage     = "https://github.com/YZhongHong/HZBaseCTool.git"
  s.license      = { :type => "MIT", :file => "FILE_LICENSE" }
  s.author             = { "" => "" }
  
  s.platform     = :ios
  s.platform     = :ios, "10.0"
  
  #  When using multiple platforms
  s.ios.deployment_target = "10.0"
  
  s.source       = { :git => "https://github.com/YZhongHong/HZBaseCTool.git", :tag => "#{s.version}" }
  
  s.source_files  = "Classes", "**/*.{h,m,mm,cpp,c}"
  s.public_header_files = "**/*.h"


  s.frameworks = "Foundation"
  s.requires_arc = true
  non_arc_files = 'PrivateClasses/amr/**/*.{h,m,mm}'
  s.pod_target_xcconfig = {
    'OTHER_LDFLAGS' => ['-ObjC'],
    'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES'
  }
  
end
