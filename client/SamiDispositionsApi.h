#ifndef SamiDispositionsApi_H_
#define SamiDispositionsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiDispositionCount.h"
#include "SamiDispositionResource.h"
#include "SamiPageResource«DispositionResource».h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiDispositionsApi {
public:
  SamiDispositionsApi();
  virtual ~SamiDispositionsApi();

  SamiDispositionResource* 
  addDispositionWithCompletion(SamiDispositionResource* disposition, void (* handler)(SamiDispositionResource*, SamiError*));
  void 
  deleteDispositionWithCompletion(Long* _id, void(* handler)(SamiError*));
  SamiDispositionResource* 
  getDispositionWithCompletion(Long* _id, void (* handler)(SamiDispositionResource*, SamiError*));
  IList* 
  getDispositionCountsWithCompletion(String* filterContext, String* filterOwner, void (* handler)(IList*, SamiError*));
  SamiPageResource«DispositionResource»* 
  getDispositionsWithCompletion(String* filterContext, String* filterOwner, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«DispositionResource»*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiDispositionsApi_H_ */
