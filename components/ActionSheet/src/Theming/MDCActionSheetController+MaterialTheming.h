// Copyright 2018-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import "MaterialActionSheet.h"
#import "MaterialContainerScheme.h"

@interface MDCActionSheetController (MaterialTheming)

/**
 Applies the theme for a material action sheet to this instance.

 @param scheme A container scheme instance containing any desired customizations to the theming
 system.
 */
- (void)applyThemeWithScheme:(nonnull id<MDCContainerScheming>)scheme
    API_DEPRECATED(
        "Use a UIMenu instead. Use UIAlertController in action sheet style for destructive "
        "confirmations. See go/material-ios-menus for guidance.",
        ios(12, API_TO_BE_DEPRECATED));

@end
