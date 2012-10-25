Pod::Spec.new do |s|
  s.name         = "MTDateComponentsPicker"
  s.version      = "0.0.1"
  s.summary      = "A picker for choosing date components. Allows some components to be undefined."
  s.homepage     = "https://github.com/mysterioustrousers/MTDateComponentsPicker"
  s.license      = 'BSD'
  s.author       = { "Adam Kirk" => "atomkirk@gmail.com" }
  s.source       = { :git => "https://github.com/mysterioustrousers/MTDateComponentsPicker.git", :tag => "0.0.1" }
  s.platform     = :ios
  s.source_files = 'DateComponentsPicker/MTDateComponentsPicker.{h,m}'
  s.requires_arc = true
  s.dependency 'MTDates'
end
