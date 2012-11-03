MTDateComponentsPicker
======================

A picker for choosing date components. Allows some components to be undefined.

### Installation

In your Podfile, add this line:

    pod "MTDateComponentsPicker"

pod? => https://github.com/CocoaPods/CocoaPods/

### Example Usage

	#import <MTDateComponentsPicker.h>
	
	@interface YourClass <MTDateComponentsPickerDelegate>
	@end
	
	
	@implementation
	
	- (void)viewDidLoad
	{
		_dateComponentsPicker.dateComponents = [[NSDateComponents alloc] init];
		_dateComponentsPicker.onChange = ^(NSDateComponents *pickedDateComponents){
			NSLog(@"%@", pickedDateComponents);
		};
	}
	
	@end
