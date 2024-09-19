#ifndef SH_AUDIO_SDM450_FOR_SENSOR_H
#define SH_AUDIO_SDM450_FOR_SENSOR_H
#ifdef CONFIG_SH_AUDIO_DRIVER /* B-019 */
int register_shub_api_speaker_notifier(struct notifier_block *nb);
int unregister_shub_api_speaker_notifier(struct notifier_block *nb);
#endif /* CONFIG_SH_AUDIO_DRIVER */ /* B-019 */

#endif
