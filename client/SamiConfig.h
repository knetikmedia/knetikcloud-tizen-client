/*
 * SamiConfig.h
 * 
 * 
 */

#ifndef SamiConfig_H_
#define SamiConfig_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::String;


namespace Swagger {

class SamiConfig: public SamiObject {
public:
    SamiConfig();
    SamiConfig(String* json);
    virtual ~SamiConfig();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiConfig* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPName();
    void setPName(String* pName);
    Boolean* getPPublicRead();
    void setPPublicRead(Boolean* pPublic_read);
    String* getPValue();
    void setPValue(String* pValue);

private:
    String* pDescription;
String* pName;
Boolean* pPublic_read;
String* pValue;
};

} /* namespace Swagger */

#endif /* SamiConfig_H_ */
