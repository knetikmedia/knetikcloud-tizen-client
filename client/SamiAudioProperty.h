/*
 * SamiAudioProperty.h
 * 
 * 
 */

#ifndef SamiAudioProperty_H_
#define SamiAudioProperty_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiFileProperty.h"
using Tizen::Base::String;


namespace Swagger {

class SamiAudioProperty: public SamiObject {
public:
    SamiAudioProperty();
    SamiAudioProperty(String* json);
    virtual ~SamiAudioProperty();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAudioProperty* fromJson(String* obj);

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

#endif /* SamiAudioProperty_H_ */
