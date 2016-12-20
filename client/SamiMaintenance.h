/*
 * SamiMaintenance.h
 * 
 * 
 */

#ifndef SamiMaintenance_H_
#define SamiMaintenance_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiObject.h"
using Tizen::Base::Boolean;
using Tizen::Base::String;


namespace Swagger {

class SamiMaintenance: public SamiObject {
public:
    SamiMaintenance();
    SamiMaintenance(String* json);
    virtual ~SamiMaintenance();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMaintenance* fromJson(String* obj);

    Boolean* getPAccessLocked();
    void setPAccessLocked(Boolean* pAccess_locked);
    SamiObject* getPDetails();
    void setPDetails(SamiObject* pDetails);
    String* getPMessage();
    void setPMessage(String* pMessage);

private:
    Boolean* pAccess_locked;
SamiObject* pDetails;
String* pMessage;
};

} /* namespace Swagger */

#endif /* SamiMaintenance_H_ */
