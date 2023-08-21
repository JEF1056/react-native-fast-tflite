#ifdef RCT_NEW_ARCH_ENABLED

  #import "RNTfliteSpec.h"
  @interface Tflite : NSObject <NativeTfliteSpec>
  @end

#else

  #import <React/RCTBridgeModule.h>
  @interface Tflite : NSObject <RCTBridgeModule>
  @end

#endif
