/*
 * SamiErrorResource.h
 * 
 * 
 */

#ifndef SamiErrorResource_H_
#define SamiErrorResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiObject.h"
using Tizen::Base::String;


namespace Swagger {

class SamiErrorResource: public SamiObject {
public:
    SamiErrorResource();
    SamiErrorResource(String* json);
    virtual ~SamiErrorResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiErrorResource* fromJson(String* obj);

    SamiObject* getPDetails();
    void setPDetails(SamiObject* pDetails);
    SamiObject* getPField();
    void setPField(SamiObject* pField);
    String* getPMessage();
    void setPMessage(String* pMessage);

private:
    SamiObject* pDetails;
SamiObject* pField;
String* pMessage;
};

} /* namespace Swagger */

#endif /* SamiErrorResource_H_ */
