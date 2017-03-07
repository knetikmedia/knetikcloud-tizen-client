/*
 * SamiBooleanResource.h
 * 
 * 
 */

#ifndef SamiBooleanResource_H_
#define SamiBooleanResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;


namespace Swagger {

class SamiBooleanResource: public SamiObject {
public:
    SamiBooleanResource();
    SamiBooleanResource(String* json);
    virtual ~SamiBooleanResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBooleanResource* fromJson(String* obj);

    Boolean* getPValue();
    void setPValue(Boolean* pValue);

private:
    Boolean* pValue;
};

} /* namespace Swagger */

#endif /* SamiBooleanResource_H_ */
