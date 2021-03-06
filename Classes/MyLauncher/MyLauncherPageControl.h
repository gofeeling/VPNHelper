//
//  MyLauncherPageControl.h
//  @rigoneri
//  
//  Copyright 2010 Rodrigo Neri
//  Copyright 2011 David Jarrett
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>

@interface MyLauncherPageControl : UIPageControl {
	NSInteger currentPage;
	NSInteger numberOfPages;
    NSInteger maxNumberOfPages;
	BOOL hidesForSinglePage;
}

@property (nonatomic) NSInteger currentPage;
@property (nonatomic) NSInteger numberOfPages;
@property (nonatomic) NSInteger maxNumberOfPages;
@property (nonatomic) BOOL hidesForSinglePage;
@property (nonatomic, retain) UIColor *inactivePageColor;
@property (nonatomic, retain) UIColor *activePageColor;

@end
