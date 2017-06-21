/*
 * SamiFileProperty.h
 * 
 * 
 */

#ifndef SamiFileProperty_H_
#define SamiFileProperty_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
using Tizen::Base::String;


namespace Swagger {

class SamiFileProperty: public SamiObject {
public:
    SamiFileProperty();
    SamiFileProperty(String* json);
    virtual ~SamiFileProperty();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFileProperty* fromJson(String* obj);

    String* getPType();
    void setPType(String* pType);
    String* getPCrc();
    void setPCrc(String* pCrc);
    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPFileType();
    void setPFileType(String* pFile_type);
    String* getPUrl();
    void setPUrl(String* pUrl);

private:
    String* pType;
String* pCrc;
String* pDescription;
String* pFile_type;
String* pUrl;
};

} /* namespace Swagger */

#endif /* SamiFileProperty_H_ */
