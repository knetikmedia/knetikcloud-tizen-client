#ifndef SamiUtilMaintenanceApi_H_
#define SamiUtilMaintenanceApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiMaintenance.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUtilMaintenanceApi {
public:
  SamiUtilMaintenanceApi();
  virtual ~SamiUtilMaintenanceApi();

  void 
  deleteUsingDELETE1WithCompletion( void(* handler)(SamiError*));
  SamiMaintenance* 
  getUsingGET1WithCompletion( void (* handler)(SamiMaintenance*, SamiError*));
  void 
  postUsingPOSTWithCompletion(SamiMaintenance* maintenance, void(* handler)(SamiError*));
  void 
  postUsingPUTWithCompletion(SamiMaintenance* maintenance, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUtilMaintenanceApi_H_ */
